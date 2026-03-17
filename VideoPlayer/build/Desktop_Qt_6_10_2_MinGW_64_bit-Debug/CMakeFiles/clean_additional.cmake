# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appVideoPlayer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appVideoPlayer_autogen.dir\\ParseCache.txt"
  "appVideoPlayer_autogen"
  )
endif()
