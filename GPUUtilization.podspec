#
# Be sure to run `pod lib lint GPUUtilization.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'GPUUtilization'
  s.version          = '0.1.0'
  s.summary          = 'A short description of GPUUtilization.'

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/rickytan/GPUUtilization'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'rickytan' => 'ricky.tan.xin@gmail.com' }
  s.source           = { :git => 'https://github.com/rickytan/GPUUtilization.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'
  s.source_files = 'GPUUtilization/Classes/*'
  s.private_header_files = 'GPUUtilization/Classes/IOKit.h'
  s.frameworks = 'UIKit', 'IOKit'
end
