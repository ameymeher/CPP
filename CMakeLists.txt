cmake_minimum_required(VERSION 3.14)
project(SampleProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(SampleProject main.cpp Student/Student.cpp Student/Student.h Box/Box.cpp Box/Box.h DS/BST/BSTNode.cpp DS/BST/BSTNode.h Date/Date.cpp Date/Date.h Utilities/Matrix/Matrix.cpp Utilities/Matrix/Matrix.h DS/Graph/MatrixGraph/MatrixGraph.cpp DS/Graph/MatrixGraph/MatrixGraph.h DS/Graph/ListGraph.cpp DS/Graph/ListGraph.h)