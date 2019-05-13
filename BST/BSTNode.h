//
// Created by Amey on 12-05-2019.
//

#ifndef SAMPLEPROJECT_BSTNODE_H
#define SAMPLEPROJECT_BSTNODE_H

#ifndef NULL
#define NULL 0
#endif
using namespace std;

#include <iostream>
#include <math.h>

class BSTNode {

    private:
        long long key;
        unsigned long long position;
        BSTNode* left;
        BSTNode* right;
        BSTNode* parent;

    public:

        BSTNode(long long key){
            this->key = key;
            parent = NULL;
            left = NULL;
            right = NULL;
        }

    BSTNode(long long key, unsigned long long position){
        this->key = key;
        this->position = position;
        parent = NULL;
        left = NULL;
        right = NULL;
    }

        BSTNode(long long key, BSTNode* left, BSTNode* right){
            this->key = key;
            this->left = left;
            this->right = right;
        }

        long long getKey() const {
            return key;
        }

        void setKey(long long key) {
            BSTNode::key = key;
        }

        BSTNode *getLeft() const {
            return left;
        }

        void setLeft(BSTNode *left) {
            BSTNode::left = left;
        }

        BSTNode *getRight() const {
            return right;
        }

        void setRight(BSTNode *right) {
            BSTNode::right = right;
        }

        BSTNode *getParent() const {
            return parent;
        }

        void setParent(BSTNode *parent) {
            BSTNode::parent = parent;
        }

        unsigned long long getPosition() const {
            return position;
        }

        void setPosition(unsigned long long position) {
            BSTNode::position = position;
        }

        //Time complexity is O(h)
        //Does not handle the skewed case
        static BSTNode* insert(BSTNode* root, long long key, unsigned long long position=1){

            //If root does not exist, then create the node and substitute the value
            if(root == NULL){
                root = new BSTNode(key,position);
            }

            //If the root is lesser than the given key, go to right subtree
            //Add the node, return the node
            //Keep this node as the right of the parent
            //Update the parent of the added node
            else if(root->key < key){
                root->right = insert(root->right,key,(position * 2) + 1);
                root->right->parent = root;
            }

            //If the root is greater than the given key, go to the left subtree
            //Add the node, return the node
            //Keep this node as the left of the parent
            //Update the parent of the added node
            else{
                root->left = insert(root->left,key,(position * 2));
                root->left->parent = root;
            }

            return root;
        }

        //Prints from lowest value to highest value
        static void printTreeInOrder(BSTNode* root){

            if(root == NULL)
                return;

            printTreeInOrder(root->left);
            cout<<root->key<<" ";
            printTreeInOrder(root->right);

        }

        static BSTNode* search(BSTNode* root, long long key){

            //If the given key is not found in the BST
            if(root == NULL){
                return NULL;
            }

            //If the given key is found in the BST
            else if(root->key == key){
                return root;
            }

            //If the key is in the right subtree
            else if(root->key < key){
                return search(root->right,key);
            }

            //If the key is in the left subtree
            else{
                return search(root->left,key);
            }
        }

        static BSTNode* findMin(BSTNode* root){

            //If there exists no tree
            if(root == NULL){
                return NULL;
            }

            //If it is the leaf node
            else if(root->left == NULL){
                return root;
            }

            //To traverse to the left subtree
            else{
                return findMin(root->left);
            }
        }

        static BSTNode* findMax(BSTNode* root){

            //If there exists no tree
            if(root == NULL){
                return NULL;
            }

            //If it is the leaf node
            else if(root->right == NULL){
                return root;
            }

            //To traverse to the right subtree
            else{
                return findMax(root->right);
            }
        }

        static BSTNode* successor(BSTNode* node){

            //If the node does not exist
            if(node == NULL){
                cout<<"The node does not exist in the tree"<<endl;
                return NULL;
            }

            //Successor is the minimum value of the right subtree
            else if(node->right != NULL){
                return findMin(node->right);
            }

            //If the tree doesn't have a right subtree
            else{
                BSTNode* currentNode = node;
                BSTNode* parentNode = node->parent;

                //Traverse the ancestors until you find the branch that comes to the left
                while((parentNode != NULL) &&
                        (currentNode == parentNode->right))
                {
                    currentNode = parentNode;
                    parentNode = parentNode->parent;
                }

                //It is the maximum value, and thus no successor
                if(parentNode == NULL){
                    return NULL;
                }

                //Successor available
                else{
                    return parentNode;
                }
            }
        }

        static BSTNode* predecessor(BSTNode* node){

            //If the node does not exist
            if(node == NULL){
                cout<<"The node does not exist in the tree"<<endl;
                return NULL;
            }

            //If the left subtree exists
            else if(node->left != NULL){
                return findMax(node->left);
            }

            //If the left subtree does not exist
            else{
                BSTNode* currentNode = node;
                BSTNode* parentNode = node->parent;

                //Traverse the ancestors till you encounter the branch that comes from the right
                while((parentNode != NULL) &&
                        (currentNode == parentNode->left))
                {
                    currentNode = parentNode;
                    parentNode = parentNode->parent;
                }

                //It is the minimum value of the tree
                if(parentNode == NULL){
                    return NULL;
                }

                //Predecessor exists
                else{
                    return parentNode;
                }
            }
        }

        static BSTNode* remove(BSTNode* node){

            //If the node does not exist in the tree
            if(node == NULL){
                cout<<"Node not available in the BST"<<endl;
                return node;
            }

            //Leaf node
            else if(node->left == NULL && node->right == NULL){

                BSTNode* parent = node->parent;
                if(parent->key < node->key)
                    parent->right = NULL;
                else
                    parent->left = NULL;

                delete(node);
                return node;
            }

            //Only right node exists
            else if(node->left == NULL && node->right != NULL){
                node->right->parent = node->parent;
                BSTNode* toDelete = node->right;
                *node = *node->right;
                delete(toDelete);
                return node;
            }

            //Only left node exists
            else if(node->left != NULL && node->right == NULL){
                node->left->parent = node->parent;
                BSTNode* toDelete = node->left;
                *node = *node->left;
                delete(node->left);
                return node;
            }

            //Both nodes exist
            else{
                BSTNode* successorNode = successor(node);
                if(successorNode->parent->key < successorNode->key)
                    successorNode->parent->right = NULL;
                else
                    successorNode->parent->left = NULL;
                //successorNode->parent = node->parent;
                node->key = successorNode->key;
                delete(successorNode);

                return node;
            }
        }
};

BSTNode* insertNode();
BSTNode* searchNode(BSTNode* root, int key);
void successorValue(BSTNode* node);
void predecessorValue(BSTNode* node);
void removeValue(BSTNode* node, BSTNode* root);

#endif //SAMPLEPROJECT_BSTNODE_H
