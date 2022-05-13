#include <iostream>
#include<bits/stdc++.h>
#include<queue>

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
bool checkBST(node* root,int minV = INT_MIN,int maxV = INT_MAX){
    if(root==NULL)
        return true;
    
    if(root->data >= minV && root->data<=maxV && checkBST(root->left,minV,root->data) && checkBST(root->right,root->data,maxV)){
        return true;
    }
    return false;
    
    
}
int main(){


    return 0;
}