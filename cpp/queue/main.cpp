#include <iostream>
#include "linked_queue.h"

int main()
{

    Queue q;

    int x = 35;
    int y = 46;
    int z = 79;
    int c = 69;

    std::cout << q.isEmpty();
    q.enQueue((void *)&x);
    q.enQueue((void *)&y);
    q.enQueue((void *)&z);
    q.enQueue((void *)&c);
    std::cout << q.isEmpty();

    std::cout << *(int *)q.deQueue() << "\n";
    std::cout << *(int *)q.deQueue() << "\n";
    std::cout << *(int *)q.deQueue() << "\n";
    std::cout << *(int *)q.deQueue() << "\n";

    return 0;
}