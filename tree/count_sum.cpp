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

int count(node* root){
    if(root == NULL)
        return 0;
        
    int lft = count(root->left);
    int rgt = count(root->right);

    return (1+lft+rgt);
}
int sum(node* root){
    if(root == NULL)
        return 0;
    
    int lft = sum(root->left);
    int rgt = sum(root->right);

    return (root->data + lft + rgt);
}


int main(){

    node* root = buildTree();
    cout<<count(root)<<"\n";
    cout<<sum(root)<<"\n";
    return 0;
}