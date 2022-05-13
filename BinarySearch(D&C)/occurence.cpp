#include <iostream>
using namespace std;
int firstoccur(int arr[],int n,int ele){
    int i = 0;int j = n-1;int ind = n;
    while(i<=j){
        int mid = (i+j)/2;
        if(arr[mid] == ele){
            ind = mid;
            j = mid - 1;
        }
        else if(arr[mid]>ele){
            j = mid - 1;
        }
        else{
            i = mid + 1;
        }
        
    }
    return ind;
}
int lastoccur(int arr[],int n,int ele){
    int i = 0;int j = n-1;int ind = n;
    while(i<=j){
        int mid = (i+j)/2;
        if(arr[mid] == ele){
            ind = mid;
            i = mid + 1;
        }
        else if(arr[mid]>ele){
            j = mid - 1;
        }
        else{
            i = mid + 1;
        }
        
    }
    return ind;
}
int main(){

    int arr[10] = {1,2,3,3,3,4,4,5,8,9};
    cout<<firstoccur(arr,10,3);cout<<endl;
    cout<<lastoccur(arr,10,4);cout<<endl;
    cout<<lastoccur(arr,10,4)-firstoccur(arr,10,4)+ 1<<endl;

    return 0;
}