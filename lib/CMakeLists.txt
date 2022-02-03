include_directories(${CMAKE_CURRENT_BINARY_DIR})

set(LIB_PSSA_SRC
  ControlDependence.cpp
  BlockBuilder.cpp
  VLoop.cpp
  PSSAEntry.cpp
  Lower.cpp
  )

add_library(PSSA MODULE ${LIB_PSSA_SRC})
set_target_properties(PSSA PROPERTIES COMPILE_FLAGS "-fno-rtti")

if(APPLE)
  set_target_properties(PSSA PROPERTIES LINK_FLAGS "-undefined dynamic_lookup")
endif(APPLE)
