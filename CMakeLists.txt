cmake_minimum_required(VERSION 3.17)
project(Assignment_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Assignment_2
        src/main.cpp src/Node.h src/GridPos.cpp src/GridPos.h src/Stack.cpp src/Stack.h src/MazeSolver.cpp src/MazeSolver.h)
