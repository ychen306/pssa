cmake_minimum_required(VERSION 3.4)
project(GSLP)

string(REPLACE "-DNDEBUG" "" CMAKE_CXX_FLAGS_RELEASE
               "${CMAKE_CXX_FLAGS_RELEASE}")

include(sanitizers.cmake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

###### GET GTEST ######
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt
    ON
    CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
######################################

find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(LLVM_BUILD_TOOLS ON)

add_definitions(${LLVM_DEFINITIONS})
include_directories(${LLVM_INCLUDE_DIRS} ${CMAKE_SOURCE_DIR}/include)
link_directories(${LLVM_LIBRARY_DIRS})
add_definitions(-fno-rtti)
add_definitions(-std=c++14)
add_definitions(-fPIC -g)
add_subdirectory(lib)

configure_file(${CMAKE_SOURCE_DIR}/test/lit.site.cfg.in
               ${CMAKE_BINARY_DIR}/test/lit.site.cfg)

configure_file(${CMAKE_SOURCE_DIR}/utils/pssa-clang.in
               ${CMAKE_BINARY_DIR}/pssa-clang)

configure_file(${CMAKE_SOURCE_DIR}/utils/pssa-clang.in
               ${CMAKE_BINARY_DIR}/pssa-clang++)

configure_file(${CMAKE_SOURCE_DIR}/utils/pssa-opt.in
               ${CMAKE_BINARY_DIR}/pssa-opt)

configure_file(${CMAKE_SOURCE_DIR}/utils/vegen-clang.in
               ${CMAKE_BINARY_DIR}/vegen-clang)

configure_file(${CMAKE_SOURCE_DIR}/utils/vegen-clang.in
               ${CMAKE_BINARY_DIR}/vegen-clang++)

include(fmt.cmake)

set(X86_WRAPPERS "${CMAKE_BINARY_DIR}/x86.bc")
set(X86_FLAGS -mssse3 -msse -mavx512bw -msse3 -msse4.1 -msse4.2 -mfma -msse2 -mavx2 -mavx512vnni -mavx512vl -mavx512dq -mgfni -mavx512vbmi2 -mavx512vbmi -mavx512cd -mavx -mavx512f -mbmi2)
add_custom_command(OUTPUT ${X86_WRAPPERS}
  COMMAND clang-14 -D__MM_MALLOC_H -target x86_64-unknown-none-gnu -O3 -emit-llvm ${X86_FLAGS} ${CMAKE_SOURCE_DIR}/lib/vegen/x86/x86.c -c -Wno-argument-outside-range -o ${X86_WRAPPERS}
  DEPENDS ${CMAKE_SOURCE_DIR}/lib/vegen/x86/x86.c
  VERBATIM
)

add_custom_target(intrinsic_defs ALL DEPENDS ${X86_WRAPPERS})
