set(LIB_PSSA_SRC ControlDependence.cpp BlockBuilder.cpp Inserter.cpp PSSA.cpp
                 Lower.cpp)

add_library(PSSACore STATIC ${LIB_PSSA_SRC})
