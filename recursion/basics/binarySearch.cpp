#include <iostream>
using namespace std;
int binarySearch(int arr[],int a, int b,int x){
    
    if(a>b)
        return -1;
    
    int mid = (a+b)/2;
    if(arr[mid] == x)
        return mid;
    else if(arr[mid] < x)
        binarySearch(arr,mid + 1 , b ,x);
    else    
        binarySearch(arr,a,mid -1,x);
}
int main(){
    int arr[] = {1,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;int a = 0;int b = n-1;
    cout<<binarySearch(arr,a,b,x);
    return 0;
}