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

void printPre(node* root){
    if(root==NULL)
        return;
    
    //Otherwise print root first followed by subtrees(children)
    cout<<root->data<<" ";
    printPre(root->left);
    printPre(root->right);
}
void printPost(node* root){
    if(root == NULL)
        return;
    //left right root
    printPost(root->left);
    printPost(root->right);
    cout<<root->data<<" ";
}
void printIn(node* root){
    if(root == NULL){
        return;
    }
    //otherwise left root right
    printIn(root->left);
    cout<<root->data<<" ";
    printIn(root->right);

 }

//Iterative method of pre order
void printItPre(node* root){//can stroe in vector too if wanted to stored or ask for return
    //Time complexity - O(N) SC -> O(n)--worst case for sc //for one right hand
    stack<node*> s;
    s.push(root);
    while(!s.empty()){
        node* d = s.top();
         
        cout<<d->data<<" ";
        s.pop();
        if(d->right!= NULL) s.push(d->right);
        if(d->left!= NULL) s.push(d->left);
    }
}

void printItIn(node* root){
    stack<node*> s;
    node* d = root;
    while(true){
        if(d != NULL){
            s.push(d);
            d = d->left;

        }
        else{
            if(s.empty() == true) break;
            d = s.top();
            s.pop();
            cout<<d->data;
            d = d->right;
        }
    }
}
void printItPost(node* root){
    stack<node*> s1;
    stack<node*> s2;
    s1.push(root);
    while(!s1.empty()){
        node* d = s1.top();
        s1.pop();
        
        s2.push(d);
        if(d->left)s1.push(d->left);
        if(d->right)s1.push(d->right);

    }
    while(!s2.empty()){
        node* d = s2.top();
        cout<<d->data<<" ";
        s2.pop();
    }
}
//USING ONE STACK

void printItPostOne(node* root){
    stack<node*> s1;
    s1.push(root);
    node* cur = s1.top();
    while(cur != NULL || !s1.empty()){
        if(cur != NULL){
            s1.push(cur);
            cur = cur->left;
        }
        else{
            node* temp = s1.top()->right;
            if(temp==NULL){
                temp = s1.top();
                s1.pop();
                cout<<temp->data<<" ";
                while(!s1.empty() && temp == s1.top()->right){
                    temp = s1.top();s1.pop();
                    cout<<temp->data<<" ";

                }
                
            }
            else    
                cur = temp;
        }
    }
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

void printKthlevel(node*root,int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    printKthlevel(root->left,k-1);
    printKthlevel(root->right,k-1);
    return;

}
void printAllLevels(node* root){
    int H = height(root);
    for(int i = 1;i<=H;i++){
        printKthlevel(root,i);
        cout<<endl;
    }
}

int main(){


    node* root = buildTree();
    printItPre(root);cout<<"\n";
    printItPost(root);
        printItPostOne(root);

    
    /*
    printPre(root);cout<<"\n";
    printPost(root);cout<<"\n";
    printIn(root);cout<<"\n";
    cout<<height(root);cout<<"\n";
    
    printAllLevels(root);
    */
    return 0;
}