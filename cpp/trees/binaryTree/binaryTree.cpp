#include <iostream>
#include "binaryTree.h"

binaryTree::binaryTree(/* args */)
{
    this->rootNode = new node_t;
}

binaryTree::~binaryTree()
{
    delete this->rootNode;
}

// recursive approach

void *binaryTree::search(void *data, node_t *node)
{
    node_t *localMain;
    if (node != 0)
        localMain = node;
    else
        localMain = this->rootNode;
    node_t currentNode;
    if (localMain->leftNode != 0)
    {
    }
    else if (localMain->rightNode != 0)
    {
    }
}

int binaryTree::insert(void *data, node_t *node)
{
    // We will implement LMR (left-MIDDLE-RIGHT) so first we add or look left one always.
    // TODO:
    node_t *currentNode;
    int returnValue = 0;
    if (node == 0)
        currentNode = this->rootNode;
    else
        currentNode = node;

    if (currentNode->leftNode == 0)
    {
        currentNode->leftNode->data = data;
        currentNode->leftNode->leftNode = new node_t;
        currentNode->leftNode->rightNode = new node_t;
        returnValue = 1;
        return returnValue;
    }
    else if (currentNode->rightNode->data == 0)
    {
        currentNode->rightNode->data = data;
        currentNode->rightNode->leftNode = new node_t;
        currentNode->rightNode->rightNode = new node_t;
        returnValue = 1;
        return returnValue;
        std::cout << "ok";
    }
    else
    {
        this->insert(data, currentNode->leftNode);
    }

    return returnValue;
}

node_t *binaryTree::getTree()
{
    return this->rootNode;
}

void *binaryTree::remove(void *data) {}