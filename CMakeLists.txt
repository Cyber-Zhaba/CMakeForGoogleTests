cmake_minimum_required(VERSION 3.10)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

# Укажите исходные файлы проекта
add_executable(untitled main.cpp)

# Подключение Google Test с помощью FetchContent
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip  # замените на актуальную версию
)
FetchContent_MakeAvailable(googletest)

# Тесты
enable_testing()
add_executable(tests tests.cpp)
target_link_libraries(tests gtest gtest_main)
add_test(NAME AllTests COMMAND tests)
