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

void codeChefBSTTask(){
    int q;
    cin>>q;
    bool treeExists = false;
    BSTNode* root = NULL;
    for(int i=0;i<q;i++){
        char c;
        long long n;
        cin>>c>>n;

        if(c == 'i'){
            if(!treeExists) {
                root = new BSTNode(n, 1);
                cout << 1 << endl;
                treeExists = true;
            }
            else{
                BSTNode::insert(root,n);
            }

        }
        else if(c == 'd'){
            BSTNode* node = BSTNode::search(root,n);
            cout<<node->getPosition()<<endl;
            BSTNode::remove(node);
        }

    }
}

void BSTTest(){
    BSTNode* root = insertNode();
    BSTNode* node = searchNode(root,23);
    cout<<"Position: " << node->getPosition()<<endl;
    successorValue(node);
    predecessorValue(node);
    removeValue(node,root);

}