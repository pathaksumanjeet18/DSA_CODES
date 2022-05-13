//positive integers
#include <iostream>
using namespace std;
int main(){

    int n = 7;
    int arr[n] = {4,1,1,1,2,3,5};
    int maxi = 0;int sum = 0;int k = 5;
    int i = 0;int j = 0;
    while(j<n){
        sum += arr[j];
        if(sum<k){ 
            j++;
        }
        else if(sum == k){
            maxi = max(maxi,j-i+1);
            j++;
        }
        else{
            while(sum>k){
                sum = sum-arr[i];
                i++;
            }
            if(sum==k){
                maxi = max(maxi,j-i+1);
            }
            j++;
        }
    }
    cout<<maxi<<"\n";
    return 0;
}