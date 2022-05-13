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
int replaceSum(node* root){
    if(root==NULL)
        return 0;
    
    if(root->left == NULL && root->right == NULL){
        return root->data;
    }
    //recurssive part
    int lft = replaceSum(root->left);
    int rgt = replaceSum(root->right);

    int tempo = root->data;
    root->data = lft+rgt;

    return (tempo + root->data);
}
void printPre(node* root){
    if(root==NULL)
        return;
    
    //Otherwise print root first followed by subtrees(children)
    cout<<root->data<<" ";
    printPre(root->left);
    printPre(root->right);
}
int main(){

    node* root = buildTree();
    replaceSum(root);
    printPre(root);
    return 0;
}