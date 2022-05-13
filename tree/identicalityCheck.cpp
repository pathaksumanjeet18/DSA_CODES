#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
        data = d;//5 4 6 -1 -1 -1 8 -1 9
        left = NULL;
        right = NULL;
    }
};

node* buildTree(){

    int d;cin>>d;

    if(d == -1)
        return NULL;
    
    node* root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;

}
///cande done with any kind off traversal and 
//bhago yaha se
bool isSame(node* p, node * q){
    if(p==NULL || q==NULL)
        return true;
    

    isSame(p->left,q->left);
    isSame(p->right,q->right);
        if(q->data != p->data) return false;

    return false;
}