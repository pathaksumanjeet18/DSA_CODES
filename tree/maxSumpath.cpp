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

class Pair{

    public:
        int branchSum;
        int maxSum = 0;

        Pair(){
            branchSum = 0;
            maxSum = 0;
        }

};

Pair maxSumPath(node* root){
    Pair p;

    if(root == NULL)
        return p;
    
    Pair left = maxSumPath(root->left);
    Pair right = maxSumPath(root->right);


    //construct two values

    int op1 = root->data;
    int op2 = left.branchSum + root->data;
    int op3 = right.branchSum + root->data;
    int op4 = left.branchSum + right.branchSum + root->data;

    int current_ans_through_root = max(op1,max(op2,max(op3,op4)));

    //branch sum of the urrent root 
    p.branchSum = max(left.branchSum,max(right.branchSum,0)) + root->data;
    p.maxSum = max(left.maxSum,max(right.maxSum,current_ans_through_root));
    return p;
}
 


int main(){
    return 0;
}


















