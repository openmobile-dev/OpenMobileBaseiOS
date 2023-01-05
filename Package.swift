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
            targets: ["OpenMobileBase"]),
    ],
    dependencies: [        
        .package(url: "https://github.com/openmobile-dev/OpenMobileCoreiOS.git", exact: "0.0.1"),        
    ],
    targets: [        
        .target(
            name: "OpenMobileBase",            
            dependencies: [.product(name: "OpenMobileCore", package: "OpenMobileCoreiOS")]),
    ])
