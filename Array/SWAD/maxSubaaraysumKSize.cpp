#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int n = 7;
    int arr[n] = {2,5,1,8,2,9,1};
    int k = 3;
    int sum = 0;int maxi = INT_MIN;
    int i = 0;int j = 0;
    while(j<n){
        sum += arr[j];
        if(j-i+1 < k){
            j++;
        }
        else if(j-i+1 == 3){
            maxi = max(sum,maxi);
            sum -= arr[i];
            i++;j++;
        }

    }
    cout<<maxi<<" ";
    return 0;
}