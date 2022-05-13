#include <iostream>
using namespace std;
int noOfSetBits(int n){
    int mask = 1;int ans = 0;
    while(n>0){
        ans = ans + (n&mask);
        n = n>>1;
    }
    return ans;
}
int noOfBitsFast(int n){
    int ans = 0;
    while(n>0){
        n = n&(n-1);//removing set bits
        ans++;
    }
    return ans;
}
int main(){

    int n = 13;
    cout<<noOfSetBits(n)<<endl;
    cout<<noOfBitsFast(n)<<endl;
    cout<<__builtin_popcount(n)<<endl;//gives no of set bits
    
    return 0;
}