typedef struct node_s node_t;

// create a node class;

struct node_s
{
    node_t* rightNode = 0;
    node_t* leftNode = 0;
    void* data = 0;
};

class binaryTree
{
private:
    node_t* rootNode;

public:
    binaryTree();
    ~binaryTree();
    void* search(void* data, node_t* node);
    int insert(void* data, node_t* node);
    void* remove(void* data);
    node_t* getTree();

};




