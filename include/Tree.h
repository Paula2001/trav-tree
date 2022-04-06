#ifndef TREE_H
#define TREE_H
#include "Node.h"

class Tree
{
    public:
        Node* root = nullptr;
        void insertIntoTree(int value,Node* initRoot);
        void printTree(Node* initRoot,Node* previousNode = nullptr);
    protected:

    private:
};

#endif // TREE_H
