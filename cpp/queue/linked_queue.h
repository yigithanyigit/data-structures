/*
typedef struct node_s node_t;

struct node_s
{
    void *data;
    node_t *next;
};

typedef struct linked_queue_s
{
    node_t *head;
    node_t *rear;
} linked_queue_t;

void enQueue(linked_queue_t *queue, void *data)
{
    // 0 means null
    if (queue->head == 0)
    {
        auto node = new node_t;
        node->data = data;

    }
}
*/



class node
{
public:
    void *data;
    node *next;

    node(void *d)
    {
        data = d;
        next = 0;
    };

    //~node();
};


class Queue
{
public:
    node *front, *rear;
    Queue();
    //~Queue();

    int enQueue(void* data);
    void* deQueue();
    int isEmpty();
    void* lastElementOfQueue();

};

