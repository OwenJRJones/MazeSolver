#include "MazeSolver.h"

using std::string;

int main() {

    // Create maze solver
    MazeSolver maze{};

    string path1 = "../tests/test.txt";

    maze.read_file(path1);
    maze.display_maze();
    maze.solve();

    return 0;
}