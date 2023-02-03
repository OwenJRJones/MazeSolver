#include <iostream>
#include "Stack.h"

using namespace std;

int main() {

    // Testing stack functionality

    // Add nodes to stack
    Stack stack;

    stack.push(GridPos{1,1});
    stack.push(GridPos{2,2});
    stack.push(GridPos{3,3});
    stack.push(GridPos{4,4});
    stack.push(GridPos{5,5});

    cout << "Test 1 - add nodes to stack" << endl;
    cout << "---------------------------" << endl;
    cout << stack << endl;

    // Remove nodes form stack
    cout << "Test 2 - remove node from stack" << endl;
    cout << "-------------------------------" << endl;
    stack.pop();
    cout << stack << endl;

    // Remove nodes form stack
    cout << "Test 3 - peek first node on stack" << endl;
    cout << "---------------------------------" << endl;
    GridPos pos = stack.peek();
    cout << "X: " << pos.x << ", Y: " << pos.y << endl;

    return 0;
}