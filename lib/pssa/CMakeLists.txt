set(LIB_PSSA_SRC ControlDependence.cpp BlockBuilder.cpp Inserter.cpp PSSA.cpp
                 Lower.cpp)

if (APPLE)
  add_library(PSSACore STATIC ${LIB_PSSA_SRC})
else()
  add_library(PSSACore SHARED ${LIB_PSSA_SRC})
endif(APPLE)
