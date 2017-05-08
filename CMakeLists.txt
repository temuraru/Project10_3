cmake_minimum_required(VERSION 3.7)
project(Project10_3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp project10.cpp FiguraPlana.cpp FiguraPlana.h Rectangle.cpp Rectangle.h Punct.cpp Punct.h)
add_executable(Project10_3 ${SOURCE_FILES})