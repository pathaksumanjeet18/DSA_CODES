#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};
void childrenSum(node* root){
    if(root==NULL)
        return;
    int child = 0;
    
    if(root->left)
        child += root->left->data;
    if(root->right)
        child += root->right->data;
    
    if(child >= root->data)
        root->data = child;
    else{
        if(root->left)root->left->data = root->data;
        else if(root->right) root->right->data = root->data;
    
    }

    childrenSum(root->left);
    childrenSum(root->right);

    int tot = 0;
    if(root->left) tot+= root->left->data;
    if(root->right) tot += root->right->data;
    if(root->left or root->left) root->data = tot;

}
int main(){



    return 0;
}