cmake_minimum_required(VERSION 3.12)
project(unitTesting1_2)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)
set(SOURCE_FILES main.cpp)
add_executable(unitTesting1_2 main.cpp test/calculator.cpp test/calculator.h test/test.cpp)
target_link_libraries(unitTesting1_2 gtest gtest_main)