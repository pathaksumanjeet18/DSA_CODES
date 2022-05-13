#include <iostream>
using namespace std;
int main(){

    int arr[8] = {-1,-1,4,-1,-2,1,5,-3};
    int sum = 0;
    int maxi = arr[0];
    for(int i=0;i<8;i++){
        sum += arr[i];
        if(sum>maxi)
            maxi = sum;
        if(sum<0)
            sum = 0;
    }
    cout<<maxi<<"\n";

    return 0;
}