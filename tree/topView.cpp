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
//TC -> O(N)  SC -> O(N)
vector<int> topView(node* root){
    vector<int> ans;
    if(root == NULL ) return ans;
    map<int,int> mpp;
    queue<pair<node* ,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto it =  q.front();
        q.pop();
        node* root = it.first;
        int line = it.second;
        if(mpp.find(line) == mpp.end()) mpp[line] = root->data;

        if(root->left != NULL){
            q.push({root->left,line-1});
        
        }
        if(root->right != NULL)
            q.push({root->right,line+1});


    }
    for(auto it: mpp){
        ans.push_back(it.second);
    }
    return ans;
}

int main(){
    node* root = buildTree();
    return 0;
}