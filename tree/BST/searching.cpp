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
//o(logn)<= o(Depth)<O(N)(if screw tree)
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
int main(){

    node* root = build();
    int s;cin>>s;
    if(searching(root,s)){
        cout<<"Present\n";
    }
    else{
        cout<<"NOt Present\n";
    }
    return 0;
}









