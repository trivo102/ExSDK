#!/bin/bash

# Configuration
PROJECT_DIR="."
OUTPUT_DIR="build/AAROutput"

echo "Step 1: Cleaning..."
./gradlew clean

echo "Step 2: Building Shared Module..."
./gradlew :shared:assembleRelease

echo "Step 3: Building ExSdk UI Module..."
./gradlew :androidApp:ExSdk:assembleRelease

echo "Step 4: Collecting AARs..."
rm -rf "$OUTPUT_DIR"
mkdir -p "$OUTPUT_DIR"

# Copy Shared AAR -> ExSdkCore
cp shared/build/outputs/aar/shared-release.aar "$OUTPUT_DIR/ExSdkCore-release.aar"

# Copy ExSdk AAR
cp androidApp/ExSdk/build/outputs/aar/ExSdk-release.aar "$OUTPUT_DIR/ExSdk-release.aar"

echo "DONE! Your Android Distribution Package is at $OUTPUT_DIR"
