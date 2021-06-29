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

file(GLOB_RECURSE sources "src/*.cc")
file(GLOB tests "tests/*.cc")

set(main "executable")
add_executable(main ${sources} ${tests})
target_include_directories(main PRIVATE "include/leetcode")
target_link_libraries(main gtest gtest_main pthread)
