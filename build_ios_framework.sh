#!/bin/bash
set -e

# Default to "device" if no argument provided
BUILD_MODE=${1:-device}
echo "Build mode: $BUILD_MODE"

# Define paths
SOURCE_DIR="iosApp/ExSdk"
OUTPUT_DIR="build/XCFrameworkOutput"
SCHEME="ExSdk"

echo "Step 1: Building Shared XCFramework..."
if [ "$BUILD_MODE" == "all" ]; then
    ./gradlew :shared:assembleExSdkCoreXCFramework -PbuildSimulator=true
else
    ./gradlew :shared:assembleExSdkCoreXCFramework
fi

echo "Step 2: Preparing UI Framework Structure..."
# Copy the built ExSdkCore.xcframework to where the Package expects it
# The Package.swift expects ./ExSdkCore.xcframework inside iosApp/ExSdk/
rm -rf iosApp/ExSdk/ExSdkCore.xcframework
cp -R shared/build/XCFrameworks/release/ExSdkCore.xcframework iosApp/ExSdk/
rm -rf iosApp/ExSdk/eKYCLib.xcframework
cp -R shared/iosLibs/ekyc/eKYCLib.xcframework iosApp/ExSdk/
rm -rf iosApp/ExSdk/ICSdkEKYCHDSaison.xcframework
cp -R shared/iosLibs/ekyc/ICSdkEKYCHDSaison.xcframework iosApp/ExSdk/

echo "Step 3: Building ExSdk XCFramework..."
# We need to build the Package as an XCFramework.
# Since it is a Swift Package, we use xcodebuild with the package directory.

cd "$SOURCE_DIR"

# Build for iOS Device
echo "Building for iOS Device..."
xcodebuild archive \
    -scheme ExSdk \
    -destination "generic/platform=iOS" \
    -archivePath "../../build/archives/ExSdk-iOS.xcarchive" \
    -derivedDataPath "../../build/derivedData" \
    SKIP_INSTALL=NO \
    BUILD_LIBRARY_FOR_DISTRIBUTION=YES

# Copy modules for iOS
FRAMEWORK_PATH="../../build/archives/ExSdk-iOS.xcarchive/Products/usr/local/lib/ExSdk.framework"
MODULES_DIR="$FRAMEWORK_PATH/Modules"
mkdir -p "$MODULES_DIR"

# Find the swiftmodule in derived data
# Path usually: .../Build/Intermediates.noindex/ArchiveIntermediates/ExSdk/BuildProductsPath/Release-iphoneos/ExSdk.swiftmodule
SWIFT_MODULE_SRC="../../build/derivedData/Build/Intermediates.noindex/ArchiveIntermediates/ExSdk/BuildProductsPath/Release-iphoneos/ExSdk.swiftmodule"

if [ -d "$SWIFT_MODULE_SRC" ]; then
    echo "Found iOS Swift Module. Copying to framework..."
    cp -R "$SWIFT_MODULE_SRC" "$MODULES_DIR/"
else
    echo "WARNING: Could not find iOS Swift Module at $SWIFT_MODULE_SRC"
fi

# Build for Simulator (Only if mode is "all")
if [ "$BUILD_MODE" == "all" ]; then
    echo "Building for iOS Simulator..."
    xcodebuild archive \
        -scheme ExSdk \
        -destination "generic/platform=iOS Simulator" \
        -archivePath "../../build/archives/ExSdk-Sim.xcarchive" \
        -derivedDataPath "../../build/derivedData" \
        SKIP_INSTALL=NO \
        BUILD_LIBRARY_FOR_DISTRIBUTION=YES \
        ARCHS=x86_64

    # Copy modules for Simulator
    FRAMEWORK_PATH_SIM="../../build/archives/ExSdk-Sim.xcarchive/Products/usr/local/lib/ExSdk.framework"
    MODULES_DIR_SIM="$FRAMEWORK_PATH_SIM/Modules"
    mkdir -p "$MODULES_DIR_SIM"

    # Path usually: .../Build/Intermediates.noindex/ArchiveIntermediates/ExSdk/BuildProductsPath/Release-iphonesimulator/ExSdk.swiftmodule
    SWIFT_MODULE_SRC_SIM="../../build/derivedData/Build/Intermediates.noindex/ArchiveIntermediates/ExSdk/BuildProductsPath/Release-iphonesimulator/ExSdk.swiftmodule"

    if [ -d "$SWIFT_MODULE_SRC_SIM" ]; then
        echo "Found Simulator Swift Module. Copying to framework..."
        cp -R "$SWIFT_MODULE_SRC_SIM" "$MODULES_DIR_SIM/"
    else
        echo "WARNING: Could not find Simulator Swift Module at $SWIFT_MODULE_SRC_SIM"
    fi
fi

echo "Step 4: Combining into XCFramework..."
rm -rf "../../$OUTPUT_DIR/ExSdk.xcframework"
mkdir -p "../../$OUTPUT_DIR"

if [ "$BUILD_MODE" == "all" ]; then
    xcodebuild -create-xcframework \
        -framework "../../build/archives/ExSdk-iOS.xcarchive/Products/usr/local/lib/ExSdk.framework" \
        -framework "../../build/archives/ExSdk-Sim.xcarchive/Products/usr/local/lib/ExSdk.framework" \
        -output "../../$OUTPUT_DIR/ExSdk.xcframework"
else
    xcodebuild -create-xcframework \
        -framework "../../build/archives/ExSdk-iOS.xcarchive/Products/usr/local/lib/ExSdk.framework" \
        -output "../../$OUTPUT_DIR/ExSdk.xcframework"
fi

echo "Copying ExSdkCore.xcframework dependency..."
rm -rf "../../$OUTPUT_DIR/ExSdkCore.xcframework"
cp -R "../../iosApp/ExSdk/ExSdkCore.xcframework" "../../$OUTPUT_DIR/"

echo "DONE! Your Distribution Package is at $OUTPUT_DIR"

