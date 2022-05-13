#include <iostream>
using namespace std;
int firstOccur(int arr[],int n,int key){
    int left = 0;int right = n-1;int firstocc;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid] == key){
            firstocc = mid;
            right = mid - 1;

        }
        else if(arr[mid]> key){
            right = mid - 1;

        }
        else{
            left = mid + 1;
        }
    }return firstocc;
}
int LastOccur(int arr[],int n,int key){
    int left = 0;int right = n-1;int lastocc;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid] == key){
            lastocc = mid;
            left = mid + 1;

        }
        else if(arr[mid]> key){
            right = mid - 1;

        }
        else{
            left = mid + 1;
        }
    }
    return lastocc;
}

int main(){

    int arr[] = {1,2,5,8,8,8,8,8,10,10,12,15,20};
    int n = sizeof(arr)/sizeof(int);

    int key;cin>>key;

    //first occurence and last occurrence
    cout<<firstOccur(arr,n,key);
    cout<<LastOccur(arr,n,key);



    return 0;
}