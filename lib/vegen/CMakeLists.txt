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

add_library(VeGen STATIC ${LIB_VEGEN_SRC})
