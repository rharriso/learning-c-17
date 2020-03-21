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
add_executable(02-04-inputstream-with-iterator src/cpp-17-cookbook/ch2/02-04-inputstream-with-iterator.cpp)
add_executable(02-05-calculator-with-stack src/cpp-17-cookbook/ch2/02-05-calculator-with-stack.cpp)
add_executable(02-06-work-counter-map src/cpp-17-cookbook/ch2/02-06-work-counter-map.cpp)
configure_file(src/cpp-17-cookbook/ch2/de-bello-gallico.txt de-bello-gallico.txt)

#
# System Programming With C++
#
add_executable(2020-03-16-00-raii-with-simple-class src/hands-on-system-prog/2020-03-16-00-raii-with-simple-class.cpp)
add_executable(2020-03-16-01-raii-with-file src/hands-on-system-prog/2020-03-16-01-raii-with-file.cpp)
configure_file(src/hands-on-system-prog/hello.txt hello.txt)
add_executable(2020-03-17-00-gsl-pointer-arith src/hands-on-system-prog/2020-03-17-00-gsl-pointer-arith.cpp)
add_executable(2020-03-19-00-contracts src/hands-on-system-prog/2020-03-19-00-contracts.cpp)
add_executable(2020-03-19-01-contracts src/hands-on-system-prog/2020-03-19-01-contracts.cpp)
add_executable(2020-03-19-02-gls-owner src/hands-on-system-prog/2020-03-19-02-gls-owner.cpp)

# find and include header headers
find_package(MicrosoftGSL CONFIG)