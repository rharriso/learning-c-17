cmake_minimum_required(VERSION 3.10)

project(Cpp-17-STL-Cookbook)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#
# C++17 STL cookbook
#

# ch 1 examples
add_executable(01-01-unpack src/cpp-17-cookbook/ch1/01-01-unpack.cpp)
add_executable(01-02-init src/cpp-17-cookbook/ch1/01-02-init.cpp)
add_executable(01-03-auto-templates src/cpp-17-cookbook/ch1/01-03-auto-templates.cpp)
add_executable(01-04-template-sum src/cpp-17-cookbook/ch1/01-04-template-sum.cpp)
add_executable(01-05-range-match src/cpp-17-cookbook/ch1/01-05-range-match.cpp)
add_executable(01-06-insert-all src/cpp-17-cookbook/ch1/01-06-insert-all.cpp)
add_executable(01-07-check-range src/cpp-17-cookbook/ch1/01-07-check-range.cpp)

# ch 2 examples
add_executable(02-01-erase-idiom src/cpp-17-cookbook/ch2/02-01-erase-idiom.cpp)
add_executable(02-02-efficiently-modifying-map-keys src/cpp-17-cookbook/ch2/02-02-efficiently-modifying-map-keys.cpp)
add_executable(02-03-unordered-map-custom-types src/cpp-17-cookbook/ch2/02-03-unordered-map-custom-types.cpp)

#
# System Programming With C++
#
add_executable(2020-03-16-00-raii-with-simple-class src/hands-on-system-prog/2020-03-16-00-raii-with-simple-class.cpp)
add_executable(2020-03-16-01-raii-with-file src/hands-on-system-prog/2020-03-16-01-raii-with-file.cpp)
configure_file(src/hands-on-system-prog/hello.txt hello.txt)