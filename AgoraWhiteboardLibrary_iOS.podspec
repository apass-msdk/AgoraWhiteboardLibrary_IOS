
Pod::Spec.new do |spec|

  spec.name         = "AgoraWhiteboardLibrary_iOS"
  spec.version      = "0.1.0"
  spec.summary      = "A short description of AgoraWhiteboardLibrary_iOS"

  # This description is used to generate tags and improve search results.
  #   * Think: What does it do? Why did you write it? What is the focus?
  #   * Try to keep it short, snappy and to the point.
  #   * Write the description between the DESC delimiters below.
  #   * Finally, don't worry about the indent, CocoaPods strips it!
   spec.description   = "A short description of AgoraWhiteboardLibrary_iOS"

  spec.homepage     = "https://github.com/apass-msdk/AgoraWhiteboardLibrary_iOS.git"
  spec.license      = { :type => "MIT", :file => "LICENSE" }


  spec.author             = { "xuwenhao" => "owl_winok@hotmail.com" }

  spec.source       = { :git => "https://github.com/apass-msdk/AgoraWhiteboardLibrary_iOS.git", :tag => "#{spec.version}" }

  spec.static_framework = true

  spec.platform     = :ios, "11.0"
  # spec.source_files  = "AgoraWhiteboardLibrary_iOS/DimensionLibrary.framework/Headers/*.{h,m}"
  spec.vendored_frameworks = 'AgoraWhiteboardLibrary_iOS/DimensionLibrary.framework'   # spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'}
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }



end
