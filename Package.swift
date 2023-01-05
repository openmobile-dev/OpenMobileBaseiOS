// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "OpenMobileBase",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "OpenMobileBase",
            targets: ["OpenMobileBase"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "OpenMobileBase",
            path: "./OpenMobileBase.xcframework"
        ),
    ]
)
