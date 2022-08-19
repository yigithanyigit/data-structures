#include "linked_queue.h"

Queue::Queue()
{
    // NULL equals to 0
    front = 0;
    rear = 0;
}

int Queue::enQueue(void *data)
{
    int returnValue = 0;

    if (rear == 0)
    {
        node *temp = new node(data);
        rear = front = temp;
        if (rear == 0)
            returnValue = 1;
    }
    else
    {
        node *temp = new node(data);
        rear->next = temp;
        rear = temp;
        if (rear == 0)
            returnValue = 1;
    }

    return returnValue;
}

void *Queue::deQueue()
{
    node *tempNode = new node(0);
    void *returnData = 0;

    if (front != 0)
    {
        tempNode = front;
        returnData = tempNode->data;
        front = tempNode->next;
        delete tempNode;
    }

    if (front == 0)
    {
        rear = 0;
    }

    return returnData;
}

int Queue::isEmpty()
{
    return (front == rear) ? 1 : 0;
}

void *Queue::lastElementOfQueue()
{
    return rear->data;
}