#include <iostream>
#include<climits>
using namespace std;
int floorvalue(int arr[],int key,int n){
    int i=0;int j = n-1;int ans = INT_MIN;
    while(i<=j){
        int mid = (i+j)/2;
        if(arr[mid]==key)
            return arr[mid];
        else if(arr[mid]>key){
            j = mid -1;
        }
        else{
            ans = mid;
            i = mid + 1;

        }
    }
    return arr[ans];
}
int ceilValue(int arr[],int key,int n){
    int i=0;int j = n-1;int ans = INT_MAX;
    while(i<=j){
        int mid = (i+j)/2;
        if(arr[mid]==key)
            return arr[mid];
        else if(arr[mid]>key){
            ans = mid;
            j = mid -1;
        }
        else{
            
            i = mid + 1;

        }
    }
    return arr[ans];
}
int main(){

    int arr[] = {1,2,3,4,7,7,8};
        int n = sizeof(arr)/sizeof(int);

    cout<<floorvalue(arr,6,n);
    cout<<ceilValue(arr,5,n);
    return 0;
}