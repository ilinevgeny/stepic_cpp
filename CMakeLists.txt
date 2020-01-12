cmake_minimum_required(VERSION 3.15)
project(stepic_1_season)

set(CMAKE_CXX_STANDARD 14)

add_executable(stepic_1_season main.cpp lessons/person.cpp lessons/person.h lessons/student.cpp lessons/student.h)