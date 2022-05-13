#include <iostream>
using namespace std;
void f(int i,int n){
    if(i>n)
        return;
    
    cout<<"Sumanjeet\n";
    f(i+1,n);
}
void printNumber(int i,int n){
    if(i<1)
        return;
    
    cout<<i<<" ";
    printNumber(i-1,n);
}
void printNumberUp(int i,int n){
    if(i>n)
        return;
    
    cout<<i<<" ";
    printNumberUp(i+1,n);
}
void printnum(int i,int n){
    if(i<1)//by backtrack
        return;
    printnum(i-1,n);
    cout<<i<<" ";
}
void printnumS(int i,int n){
    if(i>n)//by backtrack
        return;
    printnumS(i+1,n);
    cout<<i<<" ";
}
int main(){
    int n;cin>>n;
    f(1,n);
    printnum(n,n);cout<<endl;
    printnumS(1,n);cout<<endl;
    printNumberUp(1,n);
    printNumber(n,n);
    return 0;
}