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

class HBPair{

    public:
        int height;
        bool balanced;


};

HBPair isHeightBalance(node* root){
    HBPair p;
    if(root == NULL)
    {
        p.height = 0;
        p.balanced = true;
        return p;
    }
    //recuvise
    HBPair left = isHeightBalance(root->left);
    HBPair right = isHeightBalance(root->right);
    p.height = max(left.height,right.height) + 1;

    if(abs(left.height - right.height)<= 1 && left.balanced && right.balanced){
        p.balanced = true;
    }
    else{
        p.balanced = false;
    }
    return p;
}


//build balanced tree from array
node* buildTreeFromArray(int *a,int s,int e){
    //Base Case
    if(s>e){
        return NULL;
    }
    //recurssive case
    int mid = (s+e)/2;
    node* root = new node(a[mid]);
    root->left = buildTreeFromArray(a,s,mid-1);
    root->right = buildTreeFromArray(a,mid+1,e);

    return root;
}
//build a tree using pre and inorder
node* createTreeFromTravel(int *in,int *pre,int s,int e){
    static int i = 0;
    //Base Case
    if(s>e){
        return NULL;
    }
    //Rec Case
    node *root = new node(pre[i]);

    int index =- 1;
    for(int j = s;s<=e;j++){
        if(in[j]==pre[i]){
            index = j;
            break;
        }
    }
    i++;
    root->left = createTreeFromTravel(in,pre,s,index-1);
    root->right = createTreeFromTravel(in,pre,index+1,e);
    return root;




}
void printRightView(node* root,int level,int &maxLevel){

    if(root==NULL)
        return;
    
    if(maxLevel<level){
        cout<<root->data<<" ";
        maxLevel = level;

    }
    //right
    //left
    printRightView(root->right,level+1,maxLevel);
    printRightView(root->left,level+1,maxLevel);



}

int main(){

    node* root = buildTree();
    if(isHeightBalance(root).balanced)
        cout<<"Balanced\n";
    else
        cout<<"Not a balanced\n";


    int a[] = {1,2,3,4,5,6};
    int n = 6;
    node* root = buildTreeFromArray(a,0,n-1);

    int in[] = {3,2,8,4,1,6,7,5};
    int pre[] = {1,2,3,4,8,5,6,7};
    int n = sizeof(in)/sizeof(int);

    node* root = createTreeFromTravel(in,pre,0,n-1);

    int maxLevel = -1;
    printRightView(root,0,maxLevel);


    return 0;
}












