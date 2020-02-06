cmake_minimum_required(VERSION 3.10.2)

add_executable(ans_2_5 ans_2_5.c)
add_executable(ans_2_11 ans_2_11.c)
add_executable(ans_2_12 ans_2_12.c)
add_executable(ans_2_14 ans_2_14.c)
add_executable(ans_2_15 ans_2_15.c)
add_executable(ans_2_21 ans_2_21.c)

target_link_libraries(ans_2_5 PUBLIC print_bytes)
target_include_directories(ans_2_5 PUBLIC
  "${PROJECT_BINARY_DIR}"
  "${PROJECT_SOURCE_DIR}")
