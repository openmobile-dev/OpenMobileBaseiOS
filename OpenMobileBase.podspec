Pod::Spec.new do |s|
  s.name             = 'OpenMobileBase'
  s.version          = '0.0.5'
  s.summary          = 'Building Mobile Apps Simplified.'
  s.homepage         = 'https://openmobile.dev/'
  s.license          = { :type => "Commercial", :text => "Copyright 2023" }
  s.authors          = 'OpenMobile'
  s.source           = { :git => 'https://github.com/openmobile-dev/OpenMobileBaseiOS.git', :tag => '0.0.5' }
  s.ios.deployment_target = '13.0'
  s.swift_version = '5.7'

  s.vendored_frameworks  = 'OpenMobileNetwork.framework'
  s.libraries            = 'c++'
  s.source_files         = 'Sources/**/*'
  s.dependency 'SDWebImageSwiftUI', '~> 2.0.0'
  s.dependency 'OpenMobileCore', '0.0.5'
  s.static_framework     = true
end
