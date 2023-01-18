set(LIB_VEGEN_SRC
    Pack.cpp
    PackSet.cpp
    Lower.cpp
    AddrUtil.cpp
    TripCount.cpp
    DependenceChecker.cpp
    Heuristics.cpp
    GlobalSLP.cpp
    Reduction.cpp)

if (APPLE)
  add_library(VeGen STATIC ${LIB_VEGEN_SRC})
else()
  add_library(VeGen SHARED ${LIB_VEGEN_SRC})
endif(APPLE)
