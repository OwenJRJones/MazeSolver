cmake_minimum_required(VERSION 3.17)
project(Assignment_2)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "-static")

add_executable(SolveMaze
        src/main.cpp src/Node.h src/GridPos.h src/Stack.cpp src/Stack.h src/MazeSolver.cpp src/MazeSolver.h)
