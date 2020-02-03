cmake_minimum_required(VERSION 3.10.2)

add_executable(ans_2_5 ans_2_5.c)
target_link_libraries(ans_2_5 PUBLIC print_bytes)
target_include_directories(ans_2_5 PUBLIC
  "${PROJECT_BINARY_DIR}"
  "${PROJECT_SOURCE_DIR}")