set(LIB_VEGEN_SRC
    Pack.cpp
    PackSet.cpp
    Lower.cpp
    AddrUtil.cpp
    TripCount.cpp
    DependenceChecker.cpp
    Heuristics.cpp
    GlobalSLP.cpp
    Reduction.cpp
    Reducer.cpp
    LooseInstructionTable.cpp
    Matcher.cpp
    TestVectorGen.cpp
    LoopUnrolling.cpp
    UnrollFactor.cpp
    Versioning.cpp
    ConditionUserTracker.cpp
    Scalarizer.cpp
    WrappedDependenceInfo.cpp)

if (APPLE)
  add_library(VeGen STATIC ${LIB_VEGEN_SRC})
else()
  add_library(VeGen SHARED ${LIB_VEGEN_SRC})
endif(APPLE)

find_package(ortools REQUIRED CONFIG)
target_link_libraries(VeGen PRIVATE ortools::ortools)
