# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/WoCaoGMS_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/WoCaoGMS_autogen.dir/ParseCache.txt"
  "WoCaoGMS_autogen"
  )
endif()
