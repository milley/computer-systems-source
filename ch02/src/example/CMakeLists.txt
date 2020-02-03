cmake_minimum_required(VERSION 3.10.2)
add_library(print_bytes print_bytes.c)

#add_executable(print_bytes_main print_bytes_main.c print_bytes.c)
add_executable(print_bytes_main print_bytes_main.c)
target_link_libraries(print_bytes_main PUBLIC print_bytes)
target_include_directories(print_bytes_main PUBLIC
  "${PROJECT_BINARY_DIR}"
  "${PROJECT_SOURCE_DIR}")
