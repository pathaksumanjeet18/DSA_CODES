#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[5] = {1,4,7,8,10};
    int arr1[3] = {2,3,9};

    int i = 0;int j = 0;
    while(i<=(5-1)){

        if(arr[i]>arr1[j]){
            swap(arr[i],arr1[j]);
            i++;
            sort(arr1,arr1+3);
        }
        else{
            i++;
        }

    }
    for(int i = 0;i<5;i++)
        cout<<arr[i]<<" ";
    for(int j = 0;j<3;j++){
        cout<<arr1[j]<<" ";
    }
    


    return 0;

}