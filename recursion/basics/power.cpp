#include <iostream>
using namespace std;
int power(int a , int n){

    if(n == 0)
        return 1;

    return a * power(a,n-1);
}
int fastpower(int a,int n){
    if(n==0)
        return 1;
    //rec case
    int smaller_ans = fastpower(a,n/2);
    smaller_ans *= smaller_ans;

    if(n&1){
        return smaller_ans*a;

    }
    return smaller_ans;
}
int main(){

    int a = 2 ; int n = 8;
    cout<<power(a,n);

    return 0;
}