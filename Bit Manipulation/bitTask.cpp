#include <iostream>
using namespace std;
bool isOdd(int n){
        cout<<(n&1);

    return (n&1);
}
int getBit(int n,int i){
    int mask = (1<<i);
    int bit = (n&mask)>0 ? 1:0;
    return bit;
}
int setBit(int n,int i){
    int mask = (1<<i);
    int bit = (n|mask);
    return bit;
}
void clearBit(int n,int i){
    int mask = (1<<i);
    mask = (~mask);
    cout<<(n&mask);


}
void updateBit(int n,int i,int v){
    int mask = (1<<i);
    mask = (~mask);
    cout<<((n&mask)|(v<<i));//cleared bit | value left shift i;



}
int main(){

    int n= 5;
    // int i ;cin>>i;
    cout<<(-2>>1);
    
    // updateBit(n,i,1);
    // cout<<isOdd(n)<<endl;
    // cout<<getBit(n,i)<<endl;
    // n= setBit(n,i);
    // cout<<n<<endl;
    

    return 0;
} 