cmake_minimum_required(VERSION 3.10)

project(Cpp-17-STL-Cookbook)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ch 1 examples
add_executable(01-01-unpack src/ch1/01-01-unpack.cpp)
add_executable(01-02-init src/ch1/01-02-init.cpp)
add_executable(01-03-auto-templates src/ch1/01-03-auto-templates.cpp)
add_executable(01-04-template-sum src/ch1/01-04-template-sum.cpp)
add_executable(01-05-range-match src/ch1/01-05-range-match.cpp)
add_executable(01-06-insert-all src/ch1/01-06-insert-all.cpp)
add_executable(01-07-check-range src/ch1/01-07-check-range.cpp)

# ch 2 examples
add_executable(02-01-erase-idiom src/ch2/02-01-erase-idiom.cpp)
add_executable(02-02-efficiently-modifying-map-keys src/ch2/02-02-efficiently-modifying-map-keys.cpp)
add_executable(02-03-unordered-map-custom-types src/ch2/02-03-unordered-map-custom-types.cpp)