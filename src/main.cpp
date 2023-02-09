#include "MazeSolver.h"
#include <iostream>

using std::string, std::cout, std::cin;

int main(int argc, char **argv) {

    MazeSolver maze{};
    string file_name;

    // Prompt user for filename if one was not given, then open/read file
    if (argc < 2) {
        cout << "No file path was given, please specify: ";
        getline(cin, file_name);
    } else {
        file_name = argv[1];
    }

    // Solve maze and display output to console
    maze.solve(file_name);
    maze.display_maze();

    return 0;
}