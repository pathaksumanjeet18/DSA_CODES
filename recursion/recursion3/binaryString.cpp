#include <iostream>
using namespace std;
int binaryS(int n){
    if(n==0)
        return 1;
    if(n<0)
        return 1;

    return binaryS(n-1) + binaryS(n-2);
}
int main(){

    int n;
    cin>>n;
    cout<<binaryS(n);

    return 0;
}