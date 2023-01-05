set(LIB_VEGEN_SRC
    Pack.cpp
    PackSet.cpp
    Lower.cpp
    AddrUtil.cpp
    TripCount.cpp
    DependenceChecker.cpp
    Heuristics.cpp
    GlobalSLP.cpp
    MatchManager.cpp
    x86/x86.cpp)

add_library(VeGen SHARED ${LIB_VEGEN_SRC})
