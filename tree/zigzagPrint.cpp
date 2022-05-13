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

vector<vector<int>> zigzagLevelOrder(node* root){
    vector<vector<int>> result;
    if(root == NULL)
        return result;
    
    queue<node*> q;
    q.push(root);
    bool ltoR = true;

    while(!q.empty()){
        int size = q.size();
        vector<int> row(size);
        for(int i = 0;i<size;i++){
            node* d = q.front();
            q.pop();

            int index = (ltoR) ? i : (size-1-i);//if true to sidha jayega
            //nhi toh reversely
            row[index] = root->data;
            if(root->left)
                q.push(root->left);
            if(root->right)
                q.push(root->right);
            
        }
        ltoR != ltoR;
        result.push_back(row);

    }
    return result;

}

















