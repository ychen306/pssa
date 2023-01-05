set(LIB_PSSA_SRC ControlDependence.cpp BlockBuilder.cpp Inserter.cpp PSSA.cpp
                 Lower.cpp)

add_library(PSSACore SHARED ${LIB_PSSA_SRC})
