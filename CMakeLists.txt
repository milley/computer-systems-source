cmake_minimum_required(VERSION 3.10.2)

PROJECT(computer-system-source)
set(CMAKE_C_STANDARD 99)
set(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")


include_directories(include)

add_subdirectory(ch02)
add_subdirectory(ch03)
add_subdirectory(ch04)
add_subdirectory(ch05)
add_subdirectory(ch06)
add_subdirectory(ch08)
add_subdirectory(ch09)
add_subdirectory(ch10)
add_subdirectory(ch11)
