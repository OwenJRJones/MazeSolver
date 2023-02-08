#include <iostream>
#include "Stack.h"

using namespace std;

Stack::~Stack() {
    // Remove nodes using stack.pop() function
    while (m_first != nullptr) {
        pop();
    }
}

void Stack::push(GridPos location) {
    // Add node to stack
    auto node = new Node();
    node->m_location = location;
    node->m_next = m_first;
    m_first = node;
}

void Stack::pop() {
    // Pop top node off stack
    if (m_first == nullptr) {
        return;
    }
    auto node = m_first;
    m_first = m_first->m_next;
    delete node;
}

GridPos Stack::peek() {
    // Peek at top node on stack
    if (m_first == nullptr) return {-1, -1};
    return m_first->m_location;
}

std::ostream &operator<<(std::ostream &output, Stack &stack) {
    // Output stack coordinates in X , Y formatted table
    auto node = stack.m_first;
    output << " X , Y" << endl << "+-----+" << endl;
    while (node != nullptr) {
        output << " " << node->m_location.m_col << " , ";
        output << node->m_location.m_row << endl;
        node = node->m_next;
    }
    output << "+-----+";
    return output;
}
