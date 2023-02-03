#include <iostream>
#include "Stack.h"

using namespace std;

Stack::~Stack() {
    while (m_first != nullptr) {
        pop();
    }
}

void Stack::push(GridPos location) {
    auto node = new Node();
    node->m_location = location;
    node->m_next = m_first;
    m_first = node;
}

void Stack::pop() {
    if (m_first == nullptr) {
        return;
    }
    auto node = m_first;
    m_first = m_first->m_next;
    delete node;
}

GridPos Stack::peek() {
    if (m_first == nullptr) return {-1, -1};
    return m_first->m_location;
}

std::ostream &operator<<(std::ostream &output, Stack &stack) {
    auto node = stack.m_first;
    output << " X , Y" << endl << "+-----+" << endl;
    while (node != nullptr) {
        output << " " << node->m_location.x << " , " << node->m_location.y << endl;
        node = node->m_next;
    }
    output << "+-----+";
    return output;
}
