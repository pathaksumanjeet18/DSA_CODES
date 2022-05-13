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
vector<vector<int>> verticallTraversal(node* root){
    map<int,map<int,multiset<int>>> nodes;
    queue<pair<node*,pair<int,int>>> todo;
    todo.push({root,{0,0}});
    while(!todo.empty()){
        auto p = todo.front();
        todo.pop();
        node* d = p.first;
        int x = p.second.first, y = p.second.second;
        nodes[x][y].insert(root-> data);
        if(root->left)
            todo.push({root->left,{x-1,y+1}});
        if(root->right)
            todo.push({root->right,{x+1,y+1}});

    }
    vector<vector<int>> ans;
    for(auto p: nodes){
        vector<int> cal;
        for(auto q: p.second){
            cal.insert(cal.end(),q.second.begin(),q.second.end());
        }
        ans.push_back(cal);
    }
    return ans;
}