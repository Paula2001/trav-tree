#include "Tree.h"
#include "Node.h"
#include <iostream>

using namespace std;

void Tree::insertIntoTree(int value, Node* initRoot)
{
    if(!this->root){
        this->root = new Node(value);
    }else{
        Node* previousNode = this->root;
        if(this->root->value < value){
            // go right
            // echo "go right";
            if(!this->root->right){
                this->root->right = new Node(value);
                this->root = initRoot; // get the root to it's init state again !!
                return;
            }
            this->root = this->root->right;
        }else{
            // go left
            // echo "go left";
            if(!this->root->left){
                this->root->left = new Node(value);
                this->root = initRoot; // Todo : add to method init root
                return;
            }
            this->root = this->root->left;
        }
        this->insertIntoTree(value ,initRoot);
    }
}

void Tree::printTree(Node* initRoot,Node* previousNode){
    if(!previousNode){
        cout << initRoot->value << endl;
    }
    if(!initRoot->left && !initRoot->right){
        // if left and right null go back and delete nodes left then right
        if(previousNode->left){
            previousNode->left = nullptr;
        }else if(previousNode->right){
            previousNode->right = nullptr;
        }
        if(previousNode->value == initRoot->value){
            return;
        }
        initRoot = previousNode;
    }else{
        previousNode = initRoot;
        if(initRoot->left){
            initRoot = initRoot->left;
        }else{
            initRoot = initRoot->right;
        }
        // Print values
        cout << initRoot->value <<endl;
    }

    this->printTree(initRoot, previousNode);
}
