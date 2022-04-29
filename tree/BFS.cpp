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


//Level Order print using bfs(breadth first search)
void bfs(node* root){
    
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* d = q.front();
        cout<<d->data<<" ";

        q.pop();
        if(d->left)
            q.push(d->left);
        if(d->right)
            q.push(d->right);
    }
    return;
}


//level Order print line change print
void bfsLinechangePrint(node* root){//we can do it using pair thing too
    
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* d = q.front();
        if(d == NULL){
            cout<<endl;
            q.pop();
            if(!q.empty())
                q.push(NULL);
            

        }
        else{
            cout<<d->data<<" , ";

            q.pop();
            if(d->left)
                q.push(d->left);
            if(d->right)
                q.push(d->right);
        }
    }
    return;

}



int main(){

    node* root = buildTree();
    bfs(root);cout<<"\n";
    bfsLinechangePrint(root);
    return 0;
}