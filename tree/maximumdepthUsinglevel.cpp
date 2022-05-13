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


//might be wrong need to check
int maxizdepth(node* root){
    
    queue<pair<node*,int>> q;
    q.push({root,1});
    int max = INT_MIN;
    while(!q.empty()){

        auto it = q.front();
        if(it.second >= max)
            max = it.second;
        q.pop();
        if(it.first->left){
            q.push({it.first->left,it.second+1});
        }
        if(it.first->right){
            q.push({it.first->right,it.second+1});
        }

    }
    // while(!q.empty()){
    //     node* d = q.front();
    //     cout<<d->data<<" ";
 
    //     q.pop();
    //     if(d->left)
    //         q.push(d->left);
    //     if(d->right)
    //         q.push(d->right);
    // }
    return max;
}

int main(){

    node* root = buildTree();
    cout<<maxizdepth(root)<<"\n";

    return 0;    
}