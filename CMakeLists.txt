cmake_minimum_required(VERSION 3.10)

project(Cpp-17-STL-Cookbook)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ch 1 examples
add_executable(src/ch1/01-01-unpack 01-01-unpack.cpp)
add_executable(src/ch1/01-02-init 01-02-init.cpp)
add_executable(src/ch1/01-03-auto-templates 01-03-auto-templates.cpp)
add_executable(src/ch1/01-04-template-sum 01-04-template-sum.cpp)
add_executable(src/ch1/01-05-range-match 01-05-range-match.cpp)
add_executable(src/ch1/01-06-insert-all 01-06-insert-all.cpp)
add_executable(src/ch1/01-07-check-range 01-07-check-range.cpp)