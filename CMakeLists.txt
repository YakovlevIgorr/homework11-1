cmake_minimum_required(VERSION 3.25)
project(lesson11_1)

set(CMAKE_CXX_STANDARD 17)

add_library(library_house STATIC library_house/library.cpp library_house/library.h)
add_executable(greet_project main.cpp)
target_link_libraries(greet_project library_house)