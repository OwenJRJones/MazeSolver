#ifndef ASSIGNMENT_2_STACK_H
#define ASSIGNMENT_2_STACK_H

#include "Node.h"

class Stack {
private:
    Node *m_first{nullptr};
public:
    ~Stack();

    void push(GridPos);

    void pop();

    GridPos peek();

    friend std::ostream &operator<<(std::ostream &, Stack &);
};

#endif //ASSIGNMENT_2_STACK_H
