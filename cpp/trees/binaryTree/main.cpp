#include <iostream>
#include "binaryTree.h"

int main()
{
    binaryTree *tree = new binaryTree;
    tree->insert((void*)"Deneme", 0);
    tree->insert((void*)"Deneme1", 0);
    tree->insert((void*)"Deneme2", 0);
    node_t* rootNode = tree->getTree();
    std::cout << rootNode->leftNode << rootNode->rightNode << rootNode->leftNode->leftNode;
    return 0;
}