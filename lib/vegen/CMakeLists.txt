set(LIB_VEGEN_SRC Pack.cpp Lower.cpp AddrUtil.cpp TripCount.cpp
                  DependenceChecker.cpp Heuristics.cpp)

add_library(VeGen STATIC ${LIB_VEGEN_SRC})
target_include_directories(VeGen PRIVATE "${CMAKE_SOURCE_DIR}/include")
