if("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
    message(FATAL_ERROR "In-source build is not allowed!")
endif()

cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(leetcode)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(-Wall -Wextra -Wpedantic -Wconversion -Werror)

set(sources "source_files")
set(tests "test_files")
set(target "main")

file(GLOB_RECURSE sources "src/*.cc")
file(GLOB tests "tests/*.cc")

add_executable(target sources tests)
target_link_libraries(target gtest gtest_main pthread)
