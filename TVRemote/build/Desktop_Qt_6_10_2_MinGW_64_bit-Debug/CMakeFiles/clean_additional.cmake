# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TVRemote_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TVRemote_autogen.dir\\ParseCache.txt"
  "TVRemote_autogen"
  )
endif()
