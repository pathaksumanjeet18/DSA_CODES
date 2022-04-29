#include <iostream>
#include<math.h>
using namespace std;
void decimalToBinary(int n){
    int ans = 0;int i = 1;
    while(n>0){
        int last_bit = (n&1);
        ans += last_bit*i;
        n = n>>1;
        i = i*10;
        // cout<<ans;cout<<endl;
    }//hast to convert base 10 integer
    cout<<ans;
}
int main(){

    int n = 13;
    decimalToBinary(n);

    return 0;
}