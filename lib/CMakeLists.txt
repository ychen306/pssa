add_subdirectory(pssa)
add_subdirectory(vegen)

add_library(PSSA MODULE Passes.cpp)
target_link_libraries(PSSA PSSACore VeGen)
target_include_directories(PSSA PRIVATE "${CMAKE_SOURCE_DIR}/include")

if(APPLE)
  set_target_properties(PSSA PROPERTIES LINK_FLAGS "-undefined dynamic_lookup")
endif(APPLE)
