#include <iostream>
#include<queue>

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
//ACCEpts the puranawala root node and data reture=n modified one
node* insertinBST(node* root,int data){
    //BASE CASE
    if(root==NULL){
        return new node(data);

    }
    //rec case
    if(data<= root->data){
        root->left = insertinBST(root->left,data);
    }
    else{
        root->right = insertinBST(root->right,data);
    }
    return root;


}
node* build(){
    //Read a list of numbers till -1 and also these numbers will be inserted int BST
    int d;
    cin>>d;

    node* root = NULL;

    while(d!=-1){
        root = insertinBST(root,d);
        cin>>d;
    }
    return root;

}
void bfs(node* root){
    
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
void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<",";
    inorder(root->right);
}
int main(){

    node* root = build();
    inorder(root);
    cout<<"\n";
    bfs(root);
    return 0;
}