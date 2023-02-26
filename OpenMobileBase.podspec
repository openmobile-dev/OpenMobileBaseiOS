Pod::Spec.new do |s|
    s.name                    = 'OpenMobileBase'
    s.version                 = '0.0.7'
    s.summary                 = 'OpenMobileBase'
    s.description             = <<-DESC
    OpenMobileBase description
                              DESC
    s.homepage                = 'https://openmobile.dev/'
    s.license                 = { :type => 'Commercial', :text => 'Copyright 2023' }
    s.author                  = { 'OpenMobile' => 'hola@openmobile.dev' }
    s.source                  = { :git => 'https://github.com/openmobile-dev/OpenMobileBaseiOS.git', :tag => '0.0.7' }
    s.vendored_frameworks     = 'OpenMobileBase.xcframework'
    s.libraries               = 'c++'
    s.platform                = :ios, '13.0'
    s.ios.deployment_target   = '13.0'
    s.swift_version           = '5.7'

    s.vendored_frameworks     = 'OpenMobileCore.xcframework'
    s.libraries               = 'c++'
    s.source_files            = 'Sources/**/*'
    s.dependency              'SDWebImageSwiftUI', '~> 2.0.0'
    s.static_framework        = true

    s.pod_target_xcconfig     = { 'DEFINES_MODULE' => 'YES' }
  end
