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
vector<int> bottomView(node* root){
    vector<int> ans;
    if(root == NULL ) return ans;
    map<int,int> mpp;
    queue<pair<node* ,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        node* root = it.first;
        int line = it.second;
        mpp[line] = root->data; 
            

        if(root->left != NULL){
            q.push({root->left,line-1});
        
        }
        if(root->right != NULL)
            q.push({root->right,line+1});


    }
}

 