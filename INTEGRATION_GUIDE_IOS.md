# ExSdk Integration Guide (iOS)

This guide explains how to integrate the **ExSdk** (UI + Logic) into your iOS application.

## Prerequisites

- Xcode 15+
- iOS 15.0+

## Files Required

You should have received two XCFramework files:
1.  **ExSdk.xcframework** (Contains the SwiftUI Views and ViewModels)
2.  **ExSdkCore.xcframework** (Contains the core logic and KMP engine)

> **Important:** Both frameworks are required for the SDK to work because `ExSdk` depends on `ExSdkCore`.

## Installation Steps

1.  **Open your project** in Xcode.
2.  **Drag and Drop** both `ExSdk.xcframework` and `ExSdkCore.xcframework` into your project navigator (usually under the `Frameworks` group).
    *   Make sure "Copy items if needed" is checked.
    *   Select your App Target.
3.  **Configure Framework Embedding**:
    *   Select your **Project** in the Navigator.
    *   Select your **App Target**.
    *   Go to the **General** tab.
    *   Scroll down to **Frameworks, Libraries, and Embedded Content**.
    *   Ensure both `ExSdk.xcframework` and `ExSdkCore.xcframework` are listed.
    *   **CRITICAL:** Set the "Embed" option to **"Embed & Sign"** for BOTH frameworks.

## Usage

### 1. Initialize the SDK (CRITICAL)

You **MUST** initialize the SDK before using any components, ideally in your `App` struct or `AppDelegate`.

```swift
import SwiftUI
import ExSdk

@main
struct YourApp: App {
    init() {
        // Initialize the SDK Core
        ExSdk.initialize()
    }
    
    var body: some Scene {
        WindowGroup {
            ContentView() // Your views
        }
    }
}
```

### 2. Import the SDK

In any Swift file where you want to use the SDK:

```swift
import SwiftUI
import ExSdk
// import ExSdkCore // Optional: Only if you need to access core logic classes directly
```

### 3. Display the Main View

Add `ContentView()` to your view hierarchy. This is the entry point to the Pokemon list features.

```swift
struct YouAppView: View {
    var body: some View {
        // ... your other views
        
        // Use the SDK's Main View (from ExSdk)
        ContentView()
        
        // ...
    }
}
```

## Troubleshooting

*   **"Missing module 'ExSdkCore'" error**: Ensure `ExSdkCore.xcframework` is added to the project and set to "Embed & Sign".
*   **"Image not found" or resource issues**: The SDK uses standard AsyncImage, ensure network access is allowed in `Info.plist` (Arbitrary Loads) if images are from http (though most are https).
