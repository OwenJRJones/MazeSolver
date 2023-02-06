#ifndef ASSIGNMENT_2_MAZESOLVER_H
#define ASSIGNMENT_2_MAZESOLVER_H

#include <string>

class MazeSolver {
private:
    auto static const MAZE_LENGTH{51};
    auto static const MAZE_WIDTH{51};
    char m_maze[MAZE_LENGTH][MAZE_WIDTH];
public:
    ~MazeSolver();

    void read_file(std::string &);

    void display_maze();

    void solve();
};

#endif //ASSIGNMENT_2_MAZESOLVER_H
