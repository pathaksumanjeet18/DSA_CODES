#include <iostream>
using namespace std;
int clearLastIbit(int n,int i){
    int mask = (-1)<<i;//to get 111111 do -1 and or ~0
    return (n&mask);
}
int clearItoJbit(int n,int i,int j){
    int mask1 = (-1)<<(i+1);//-1 == ~0
    int mask2 = (-1)<<(j);//2^n -1
    //mask2 = 2^j -1 //1<<j -1 
    mask2 = ~mask2;
    int mask = mask1|mask2;
    return (n&mask);
}
int main(){

    int n  = 31;
    int i = 3;int j = 1;
    cout<<clearLastIbit(n,i)<<"\n";//here i is no of bits and the index
    cout<<clearItoJbit(n,i,j);

    return 0;
}