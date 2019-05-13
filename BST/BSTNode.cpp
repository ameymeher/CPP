//
// Created by Amey on 12-05-2019.
//
#ifndef NULL
#define NULL 0
#endif

#include "BSTNode.h"

BSTNode* insertNode(){
    BSTNode* root = new BSTNode(23,1);
    BSTNode::insert(root,12);
    BSTNode::insert(root,3);
    BSTNode::insert(root,7);
    BSTNode::insert(root,15);
    BSTNode::insert(root,31);
    BSTNode::insert(root,29);
    BSTNode::insert(root,88);
    BSTNode::insert(root,53);

    BSTNode::printTreeInOrder(root);
    cout<<endl;

    return root;
}

BSTNode* searchNode(BSTNode* root, int key){
    BSTNode* node = BSTNode::search(root,key);
    if(node != NULL){
        cout<<"Found node: "<<node->getKey()<<endl;
    }

    return node;
}

void successorValue(BSTNode* node){
    BSTNode* successor = BSTNode::successor(node);
    if(successor != NULL)
        cout<<"Successor of "<<node->getKey()<< ": " << BSTNode::successor(node)->getKey() << endl;
}

void predecessorValue(BSTNode* node){
    BSTNode* predecessor = BSTNode::predecessor(node);
    if(predecessor != NULL)
        cout<<"Predecessor of "<<node->getKey()<<": " << BSTNode::predecessor(node)->getKey() << endl;
}

void removeValue(BSTNode* node,BSTNode* root){
    BSTNode::remove(node);
    BSTNode::printTreeInOrder(root);
}
