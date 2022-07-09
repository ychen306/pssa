include(GoogleTest)

add_executable(tests OrderedListsTest.cpp)
llvm_map_components_to_libnames(LLVM_LIBS core)
target_link_libraries(tests gtest_main ${LLVM_LIBS})
gtest_add_tests(TARGET tests)
