#include <iostream>
#include <stack>
using namespace std;
void insertAtbottom(stack<int> &s,int x){
    //base case
    if(s.empty()){
        s.push(x);
        return;
    }
    int data = s.top();
    s.pop();
    insertAtbottom(s,x);
    s.push(data);
}
void reverseStack(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }
    //otherwise
    //pop out the top element and insert it at the bottom of 
    //reversed smaller stack

    int x = s.top();
    s.pop();

    reverseStack(s);
    insertAtbottom(s,x);
}
int main(){
    
    stack<int> s;
    for(int i = 0;i<=5;i++){
        s.push(i);
    }
    reverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}