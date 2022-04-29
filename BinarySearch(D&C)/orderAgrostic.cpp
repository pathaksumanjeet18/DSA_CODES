#include <iostream>
using namespace std;
int searchkey(int arr[],int key,int n){
    int i=0;int j = n-1;
    while(i<=j){
        int mid = (i+j)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key){
            i = mid + 1;
        }
        else{
            j = mid - 1;
        }
    }
}
int main(){

    int arr[] = {9,7,6,5,4,3,2,1};
        int n = sizeof(arr)/sizeof(int);

    cout<<searchkey(arr,7,n);
    
    return 0;
}