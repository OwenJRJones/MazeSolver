#include "MazeSolver.h"

using std::string;

int main() {

    // Instantiate maze solver
    MazeSolver maze{};

    string demo = "../docs/maze.txt";
    string test = "../tests/test.txt";
    string test2 = "../tests/test2.txt";
    string test3 = "../tests/test3.txt";

    // Solve mazes and display output to console
    maze.solve(demo);
    maze.display_maze();

    maze.solve(test);
    maze.display_maze();

    maze.solve(test2);
    maze.display_maze();

    maze.solve(test3);
    maze.display_maze();

    return 0;
}