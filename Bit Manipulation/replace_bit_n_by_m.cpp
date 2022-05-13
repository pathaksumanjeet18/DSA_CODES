#include <iostream>
using namespace std;

/*
    you are given two 32 bit numbers N and M and Two bit position i and j 
    write a method to set all buts btwm i and j in N equal to m (e.g. m becomea
    a substring of N located at i and starting at j)
    
    INput N = 10000000000
    M = 10101 i = 2;j = 6;
    Output N = 10001010100
*/
int clearItoJbit(int n,int i,int j){
    int mask1 = (-1)<<(i+1);//-1 == ~0
    int mask2 = (-1)<<(j);//2^n -1
    //mask2 = 2^j -1 //1<<j -1 
    mask2 = ~mask2;
    int mask = mask1|mask2;
    return (n&mask);
}
int replaceBitNbyM(int n,int m,int i,int j){
    m = (m<<j);
    n = clearItoJbit(n,i,j);
    return (n|m);
}

int main(){

    long long int n = 1024;
    int m = 21;
    int i = 6;int j = 2;
    cout<<replaceBitNbyM(n,m,i,j);

    return 0;
}