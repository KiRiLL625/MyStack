#include <iostream>
#include "Stack.h"
#include "ListStack.h"
#include "VectorStack.h"
int main() {
    IStackImplementation* stack = new VectorStack();
    stack->push(1);
    stack->push(2);
    stack->push(3);
    std::cout << stack->top() << std::endl;
    return 0;
}
