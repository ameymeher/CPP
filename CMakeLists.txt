cmake_minimum_required(VERSION 3.14)
project(SampleProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(SampleProject main.cpp Student/Student.cpp Student/Student.h Box/Box.cpp Box/Box.h BST/BSTNode.cpp BST/BSTNode.h Date/Date.cpp Date/Date.h)