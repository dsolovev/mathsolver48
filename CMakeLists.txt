cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(mathsolver48 LANGUAGES CXX)

add_executable(mathsolver48 main.cpp)

enable_testing()

add_test(test01 "echo 15 10 3 | mathsolver48.exe")

set_tests_properties(test01 PROPERTIES
    PASS_REGULAR_EXPRESSION "x = (а + b — f / а) + f * a * a — (a + b) = 675"
    FAIL_REGULAR_EXPRESSION "Error!")
