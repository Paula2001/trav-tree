#include <iostream>
#include "Tree.h"
using namespace std;

int main()
{
    Tree* tree = new Tree();
    tree->insertIntoTree(11,tree->root);
    tree->insertIntoTree(12,tree->root);
    tree->insertIntoTree(13,tree->root);

    tree->printTree(tree->root);
    return 0;
}
