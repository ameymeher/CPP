#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include "BST/BSTNode.h"


using namespace std;

void task(){

}

void runOverTestCases(){
    int n;
    cin>>n;
    bool treeExists = false;
    BSTNode* root;
    for(int i=0;i<n;i++){
        task();
    }
}

int main() {
    //runOverTestCases();
    /*BSTNode* root = insertNode();
    BSTNode* node = searchNode(root,23);
    cout<<"Position: " << node->getPosition()<<endl;
    successorValue(node);
    predecessorValue(node);
    removeValue(node,root);
    return 0;*/

    int q;
    cin>>q;
    bool treeExists = false;
    BSTNode* root = NULL;
    for(int i=0;i<q;i++){
        char c;
        unsigned long long n;
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
    return 0;
}

