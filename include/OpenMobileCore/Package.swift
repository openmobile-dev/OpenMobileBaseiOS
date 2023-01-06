// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "OpenMobileCore",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "OpenMobileCore",
            targets: ["OpenMobileCore"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "OpenMobileCore",
            path: "./OpenMobileCore.xcframework"
        ),
    ]
)
