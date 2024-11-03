cmake_minimum_required(VERSION 3.10)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/release-1.15.2.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(tests tests.cpp)
target_link_libraries(tests gtest gtest_main)
add_test(NAME AllTests COMMAND tests)
