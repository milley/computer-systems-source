cmake_minimum_required(VERSION 3.10.2)
add_library(print_bytes print_bytes.c)

#add_executable(print_bytes_main print_bytes_main.c print_bytes.c)
add_executable(print_bytes_main print_bytes_main.c)
add_executable(type_cast type_cast.c)
add_executable(symbol_extension symbol_extension.c)
add_executable(tmult_ok tmult_ok.c)

target_link_libraries(print_bytes_main PUBLIC print_bytes)
target_link_libraries(symbol_extension PUBLIC print_bytes)
target_include_directories(print_bytes_main PUBLIC
  "${PROJECT_BINARY_DIR}"
  "${PROJECT_SOURCE_DIR}")
