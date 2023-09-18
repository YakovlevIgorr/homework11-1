cmake_minimum_required(VERSION 3.25)
project(lesson11_1)

set(CMAKE_CXX_STANDARD 17)

add_library(library_house STATIC library_house/library.cpp library_house/library.h)
add_library(library_din_house SHARED dinamic_lab/din_library.h dinamic_lab/din_library.cpp)
add_executable(greet_project main.cpp dinamic_lab/din_library.cpp)
target_link_libraries(greet_project library_house library_din_house)