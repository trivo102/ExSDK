// swift-tools-version: 5.9
import PackageDescription

let package = Package(
    name: "ExSdk",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "ExSdk",
            type: .dynamic,
            targets: ["ExSdk"]),
    ],
    targets: [
        .target(
            name: "ExSdk",
            dependencies: ["ExSdkCore", "eKYCLib", "ICSdkEKYCHDSaison"]),
        .binaryTarget(
            name: "ExSdkCore",
            path: "./ExSdkCore.xcframework"
        ),
        .binaryTarget(
            name: "eKYCLib",
            path: "./eKYCLib.xcframework"
        ),
        .binaryTarget(
            name: "ICSdkEKYCHDSaison",
            path: "./ICSdkEKYCHDSaison.xcframework"
        )
    ]
)
