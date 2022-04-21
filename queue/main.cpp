#include <iostream>
#include "include/Queue.h"

int main() {

    int length = 5;
    Queue<int> queue(length);

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);

    queue.print();

    return 0;
}