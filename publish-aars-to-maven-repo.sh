#!/usr/bin/env bash
set -euo pipefail


PROJECT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}" )" && pwd)"
REPO_DIR="$PROJECT_DIR/build/maven-repo"
VENDOR_DIR="$PROJECT_DIR/shared/androidLibs"

if ! command -v jar >/dev/null 2>&1; then
  echo "❌ 'jar' tool not found. Please ensure JDK is installed and 'jar' is on PATH."
  exit 1
fi

publish_aar() {
  local groupId="$1"
  local artifactId="$2"
  local version="$3"
  local aarFile="$4"

  if [[ ! -f "$aarFile" ]]; then
    echo "❌ AAR not found: $aarFile"
    exit 1
  fi

  # Convert groupId to a Maven folder path (dots -> slashes)
  local groupPath
  groupPath="$(echo "$groupId" | tr '.' '/')"

  local outDir="$REPO_DIR/$groupPath/$artifactId/$version"
  mkdir -p "$outDir"

  local outAar="$outDir/$artifactId-$version.aar"
  local outPom="$outDir/$artifactId-$version.pom"

  cp "$aarFile" "$outAar"

  cat > "$outPom" <<EOF
<project xmlns="http://maven.apache.org/POM/4.0.0" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
  xsi:schemaLocation="http://maven.apache.org/POM/4.0.0 http://maven.apache.org/xsd/maven-4.0.0.xsd">
  <modelVersion>4.0.0</modelVersion>
  <groupId>$groupId</groupId>
  <artifactId>$artifactId</artifactId>
  <version>$version</version>
  <packaging>aar</packaging>
</project>
EOF

  # Minimal maven-metadata.xml so Gradle can resolve newest versions properly.
  local metaDir="$REPO_DIR/$groupPath/$artifactId"
  mkdir -p "$metaDir"
  local metaFile="$metaDir/maven-metadata.xml"
  cat > "$metaFile" <<EOF
<metadata>
  <groupId>$groupId</groupId>
  <artifactId>$artifactId</artifactId>
  <versioning>
    <latest>$version</latest>
    <release>$version</release>
    <versions>
      <version>$version</version>
    </versions>
    <lastUpdated>$(date -u +%Y%m%d%H%M%S)</lastUpdated>
  </versioning>
</metadata>
EOF

  echo "✅ Published: $groupId:$artifactId:$version"
}

mkdir -p "$REPO_DIR"

# 1. Publish Vendor AARs
echo "Step 1: Publishing Vendor AARs..."
publish_aar "com.hdsaison.ekyc" "ekyc_sdk_hdsaison" "1.2.2" "$VENDOR_DIR/ekyc_sdk_hdsaison-release-v1.2.2.aar"
publish_aar "com.hdsaison.scanqr" "scanqr_ic_sdk" "1.0.6" "$VENDOR_DIR/scanqr_ic_sdk-release_v1.0.6.aar"

# 2. Publish Project AARs (ExSDK, ExSDKCore)
echo "Step 2: Publishing Project AARs..."

# Directory where build_android_aar.sh outputs the project AARs
PROJECT_AARS_DIR="$PROJECT_DIR/build/AAROutput"

# Define your project coordinates
PROJECT_GROUP_ID="com.hdsaison.exsdk"
PROJECT_VERSION="1.0.0"

# Note: These paths depend on build_android_aar.sh output
EXSDK_AAR="$PROJECT_AARS_DIR/ExSdk-release.aar"
EXSDK_CORE_AAR="$PROJECT_AARS_DIR/ExSdkCore-release.aar"

if [[ -f "$EXSDK_AAR" ]]; then
    publish_aar "$PROJECT_GROUP_ID" "exsdk" "$PROJECT_VERSION" "$EXSDK_AAR"
else
    echo "⚠️  ExSdk AAR not found at $EXSDK_AAR. Did you run 'build_android_aar.sh'?"
fi

if [[ -f "$EXSDK_CORE_AAR" ]]; then
    publish_aar "$PROJECT_GROUP_ID" "exsdk_core" "$PROJECT_VERSION" "$EXSDK_CORE_AAR"
else
    echo "⚠️  ExSdkCore AAR not found at $EXSDK_CORE_AAR. Did you run 'build_android_aar.sh'?"
fi

echo ""
echo "Local Maven repo is ready at: $REPO_DIR"
