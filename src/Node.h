#ifndef ASSIGNMENT_2_NODE_H
#define ASSIGNMENT_2_NODE_H
#include "GridPos.h"

struct Node {
    GridPos m_location;
    Node* m_next{nullptr};
};

#endif //ASSIGNMENT_2_NODE_H
