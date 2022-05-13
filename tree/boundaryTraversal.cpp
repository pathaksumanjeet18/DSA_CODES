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
void addLeftBoundary(node* root,vector<int> &res){
    node* cur = root->left;
    while(cur){
        if(isLeaf(cur)) res.push_back(cur->data);
        if(cur->left) cur = cur->left;
        else cur= cur->right; 
    }
}
void addRightBoundary(node* root,vector<int> &res){
    node* cur = root->right;
    vector<int> tmp;
    while(cur){
        if(!isLeaf(cur)) tmp.push_back(cur->data);
        if(cur->right) cur = cur->right;
        else cur = cur->left;

    }
    for(int i = tmp.size()-1;i>=0;--i){
        res.push_back(tmp[i]);
    }
}
void addLeaves(node* root,vector<int> &res){
    if(isLeaf(root)){
        res.push_back(root->data);
        return;
    }
    if(root->left) addLeaves(root->left,res);
    if(root->right) addLeaves(root->right,res);
}
bool isLeaf(node* root){
    if(!root->left && !root->right)
        return false;
    return true;
}
vector<int> printBoundary(node* root){
    vector<int> res;
    if(!root) return res;//when bt is null
    if(!isLeaf(root)) res.push_back(root->data);//if rootnode is not a leafnode
    addLeftBoundary(root,res);//O(height)
    addLeaves(root,res);//O(N)
    addRightBoundary(root,res);//O(height)
    return res;

}