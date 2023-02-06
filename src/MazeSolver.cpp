#include "MazeSolver.h"
#include "Stack.h"
#include <iostream>
#include <fstream>

using namespace std;

MazeSolver::~MazeSolver() = default;

void MazeSolver::read_file(string &path) {
    fstream in(path);
    string line;
    auto count{0};

    // Open file and read in maze
    try {
        if (in.is_open()) {
            // Populate Maze 2D array with file data
            while (getline(in, line)) {
                for (auto i = 0; i < line.length(); i++) {
                    m_maze[count][i] = line[i];
                }
                count++;
            }
        }
        if (in.fail()) {
            cout << "Failed to read file" << endl;
        }
    } catch (exception &e) {
        cout << e.what() << endl;
    }
    in.close();
}

void MazeSolver::display_maze() {
    // Display maze to console
    for (auto &i: m_maze) {
        for (char j: i) {
            cout << j;
        }
        cout << endl;
    }
}

void MazeSolver::solve() {

}


