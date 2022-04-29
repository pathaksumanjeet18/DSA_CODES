#include <iostream>
using namespace std;
int fact(int n){
    if(n==1)//base case
        return 1;

    //recursive case
    int small_ans = fact(n-1);
    return n*small_ans;
}
int fib(int n){
    //base case
    if(n==0 or n==1)
        return n;

    //recursive calls;
    int f1 = fib(n-1);
    int f2 = fib(n-2);


    return f1 + f2;
    
}
int main(){

    int n;cin>>n;

    // cout<<fact(n)<<endl;
    cout<<fib(n)<<endl;
    return 0;
}