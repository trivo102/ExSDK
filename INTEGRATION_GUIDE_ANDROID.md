# ExSdk Integration Guide (Android)

This guide explains how to integrate the **ExSdk** (UI + Logic) into your Android application.

## Prerequisites

- Android Studio Koala+ (or compatible)
- Kotlin 1.9.0+
- Jetpack Compose

## Files Required

You need two AAR files:
1.  **ExSdk-release.aar** (UI Components) - *Generate using `./build_android_aar.sh`*
2.  **ExSdkCore-release.aar** (Core Logic)

## Installation Steps

### 1. Add AARs to Project

1.  Create a `libs` folder in your app module (e.g., `app/libs`).
2.  Copy both `.aar` files into `app/libs`.

### 2. Update `build.gradle.kts`

Add the following directory search and dependencies to your **app-level** `build.gradle.kts`:

```kotlin
dependencies {
    // Import SDK AARs
    implementation(files("libs/ExSdk-release.aar"))
    implementation(files("libs/ExSdkCore-release.aar"))

    // Required Transitive Dependencies
    // The SDK uses these libraries, and you must include them since AARs don't carry transitive deps automatically.
    
    // Koin (Dependency Injection)
    implementation("io.insert-koin:koin-android:3.5.6")
    implementation("io.insert-koin:koin-compose:3.5.6")

    // Coil (Image Loading)
    implementation("io.coil-kt.coil3:coil-compose:3.0.0-rc02")
    implementation("io.coil-kt.coil3:coil-network-ktor:3.0.0-rc02")
    
    // Compose (Standard BOM setup)
    implementation(platform("androidx.compose:compose-bom:2024.04.01"))
    implementation("androidx.compose.ui:ui")
    implementation("androidx.compose.material3:material3")
}
```

### 3. Initialize the SDK (CRITICAL)

In your `Application` class or main `Activity` `onCreate`, verify you initialize the SDK.

```kotlin
import com.exam.exsdk.ui.ExSdk

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        
        // Initialize Core SDK
        ExSdk.initialize(this)
        
        setContent {
            // ...
        }
    }
}
```

## Usage

Use the `App` composable to display the main entry point:

```kotlin
import com.exam.exsdk.ui.ExSdkContent

setContent {
    MaterialTheme {
        ExSdkContent()
    }
}
```
