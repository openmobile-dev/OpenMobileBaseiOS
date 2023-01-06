// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "OpenMobileBase",
    platforms: [
        .iOS(.v13),
    ],
    products: [
        .library(
            name: "OpenMobileBase",
            type: .dynamic,
            targets: ["OpenMobileBase"]),
    ],
    dependencies: [
        //        .package(name: "OpenMobileCore", path: "../openmobile-core/build/frameworks/OpenMobileCore"),
        .package(name: "OpenMobileCore", path: "include/OpenMobileCore"),
    ],
    targets: [
        // .systemLibrary(name: "OpenMobileCore", path: "include/OpenMobileCore.framework"),
        .target(
            name: "OpenMobileBase",
            dependencies: ["OpenMobileCore"]),
    ])
