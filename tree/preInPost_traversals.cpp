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

node* buildTree(){

    int d;cin>>d;

    if(d == -1)
        return NULL;
    
    node* root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;

}
void prePostIn(node* root){

    stack<pair<node*,int>> s;
    
    vector<int> pre,in,post;

    s.push({root,1});
    while(!s.empty())
    {
        auto it = s.top();
        s.pop();

        if(it.second == 1){
            pre.push_back(it.first->data);
            it.second++;
            s.push(it);
            if(it.first->left ,1);
        }
        else if(it.second == 2){
            in.push_back(it.first->data);
            it.second++;
            s.push(it);
            if(it.first->left ,1);
        }
        else{
            post.push_back(it.first->data);
        }
        

    }

}
int main()
{
    node* root = buildTree();
    prePostIn(root);


    return 0;
}















