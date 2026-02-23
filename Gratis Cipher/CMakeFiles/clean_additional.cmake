# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\ws_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ws_autogen.dir\\ParseCache.txt"
  "ws_autogen"
  )
endif()
