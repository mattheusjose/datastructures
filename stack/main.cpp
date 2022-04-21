#include <iostream>
#include "include/Stack.h"

int main() {

    int size = 5;
    Stack stack(size);

    stack.push(10);
    stack.push(11);
    stack.push(25);
    stack.push(49);
    stack.push(42);

    stack.print();

    return 0;
}