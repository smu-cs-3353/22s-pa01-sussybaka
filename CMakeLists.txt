cmake_minimum_required(VERSION 3.15)

# Project name
project(22s-pa01-sussybaka)

# Executable
add_executable(22s-pa01-sussybaka src/main.cpp src/Loader.cpp src/Loader.h src/Picture.cpp src/Picture.h src/tokStr.h src/tokStr.cpp)

#set(CMAKE_CXX_STANDARD 14)

# Input and output configure files
configure_file(input/test.txt COPYONLY)
