Pod::Spec.new do |s|
  s.name             = 'OpenMobileBase'
  s.version          = '0.0.2'
  s.summary          = 'Building Mobile Apps Simplified.'
  s.homepage         = 'https://openmobile.dev/'  
  s.license          = { :type => "Commercial", :text => "Copyright 2023" }
  s.authors          = 'OpenMobile'
  s.source           = { :git => 'https://github.com/openmobile-dev/OpenMobileBaseiOS.git', :tag => s.version.to_s }
  s.ios.deployment_target = '13.0'
  s.swift_version = '5.7'

  s.vendored_frameworks  = 'OpenMobileCore.framework', 'OpenMobileNetwork.framework'
  s.libraries            = 'c++'
  s.source_files      = 'Sources/**/*'

  s.dependency 'SDWebImageSwiftUI', '~> 2.0.0'
  s.static_framework = true
end
