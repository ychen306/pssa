file(GLOB_RECURSE ALL_SOURCE_FILES *.cpp *.h)

add_custom_target(
  fmt
  COMMAND clang-format
  -style=LLVM
  -i
  ${ALL_SOURCE_FILES}
)
