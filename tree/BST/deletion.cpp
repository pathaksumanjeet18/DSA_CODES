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
bool searching(node* root,int data){
    if(root ==NULL)
        return false;
    
    if(root->data == data)
        return true;
    

    //recur search
    if(data<=root->data){
        return searching(root->left,data);
    }
    else{
        return searching(root->right,data);
    }
}
//Deletion of any node 
//three types of nodes 
// 0 child nodes 
//in this case we return null and attach it

//1 child nodes
//either left of right will be not null
//return child to the parent (Stroe in some varrie)


//2 child nodes
//case can be the root it self only
//then has to find replacement for root
//if we go with inorder the predecssecor or the successsor
//pic left side largest element or smallest element in right
//now work has to delete the element deletion kin

node* delelteinBST(node* root,int data){
    if(root==NULL)
        return NULL;
    else if(data<root->data){
        root->left = delelteinBST(root->left,data);
        return root;
    }
    else if(data== root->data){
        //Found the node to delete 3 cases
        //0 child
        if(root->left == NULL && root->right==NULL ){
            delete root;
            return NULL;
        }
        //2. case one child
        if(root->left != NULL && root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        if(root->right!=NULL && root->left ==NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }
        //3 case 2 child
        node* replace = root->right;
        //find the inorder succesor from right sub tree
        while(replace ->left!=NULL){
            replace = replace->left;
        }
        root->data = replace->data;
        root->right = delelteinBST(root->right,replace->data);
        return root;
    }
    else{
        root->right = delelteinBST(root->right,data);
        return root;
    }


}

int main(){

    node* root = build();
    inorder(root);
    cout<<endl;
    int s;cin>>s;
    root = delelteinBST(root,s);
    inorder(root);cout<<endl;
    bfs(root);
    return 0;
}