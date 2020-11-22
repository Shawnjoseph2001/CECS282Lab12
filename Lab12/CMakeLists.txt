# cmake_minimum_required(VERSION <specify CMake version here>)
project(Lab12)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab12 main.cpp person.cpp person.h comparePersons.cpp comparePersons.h)