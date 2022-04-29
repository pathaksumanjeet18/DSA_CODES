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
int height(node* root){
    if(root == NULL){
        return 0;
    }
    int h_ls = height(root->left);
    int h_rs = height(root->right);




    int x = max(h_ls,h_rs);
    return (x+1);

}

int diameter(node* root){
    if(root == NULL)
        return 0;
    
    //root
    int h1 = height(root->left);
    int h2 = height(root->right);
    int op1 = h1 + h2;
    int op2 = diameter(root->left);//left
    int op3 = diameter(root->right);//right

    return max(op1,max(op2,op3));
}
class Pair{
    public:
        int height;
        int diameter;

};
Pair fastDiameter(node* root){
    Pair p;
    if(root==NULL){
        p.diameter = p.height = 0;
        return p;
    }

    //otherwise
    Pair left = fastDiameter(root->left);
    Pair right = fastDiameter(root->right);

    p.height = max(left.height,right.height) + 1;
    p.diameter = max(left.height+right.height,max(left.height,right.height));
    return p;
    

}

int main(){

    node* root = buildTree();
    cout<<diameter(root);

    return 0;
}