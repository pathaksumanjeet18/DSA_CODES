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

istream& operator>>(istream&in , node* root){
    
}
void printKthLevel(node* root,int k){
    if(root==NULL)
        return;
    
    if(k==1){
        cout<<root->data<<" , ";
        return;
    }
    printKthLevel(root->left,k-1);
    printKthLevel(root->right,k-1);
    return;

}
int printKdistance(node* root,node* target, int k){
    if(root==NULL)//not present return -1
        return -1;

    
    if(root==target){
        printKthLevel(root,k);
        return 0;
    }

    //Now we have two cases
    //Ancestor itself or we need to go to right side or leftside
    int Dl = printKdistance(root->left,target,k);
    if(Dl!=-1){
        if(Dl+1 == k){//if ancestor at distance k
            cout<<root->data<<" ";
        }
        else
            printKthLevel(root->right,k-2-Dl);

        return 1+Dl;
    }
    int DR = printKdistance(root->right,target,k);
    if(DR!=-1){
        if(DR+1 == k){
            cout<<root->data<<" ";
        }
        else
            printKthLevel(root->left,k-2-DR);

        return 1+DR;
    }
    //node was not present in left and right
    return -1;
}







int main(){

    node* root = NULL;



}







