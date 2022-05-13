#include <iostream>
using namespace std;
int multiply(int a , int n){

    if(n == 1)
        return a;

    return a + multiply(a,n-1);
}
int main(){

    int a = 2 ; int n = 15;
    cout<<multiply(a,n);

    return 0;
}