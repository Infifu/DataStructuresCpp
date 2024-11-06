#include "Stack.h"
#include <iostream>

int main()
{
    Stack* s = new Stack;
    initStack(s);
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);
    std::cout << pop(s) << std::endl; // Should print 5
    std::cout << pop(s) << std::endl; // Should print 4
    std::cout << pop(s) << std::endl; // Should print 3
    std::cout << pop(s) << std::endl; // Should print 2
    std::cout << pop(s) << std::endl; // Should print 1
    std::cout << pop(s) << std::endl; // Should print -1 (stack is empty)

    cleanStack(s);
    delete s;
    return 0;
}
