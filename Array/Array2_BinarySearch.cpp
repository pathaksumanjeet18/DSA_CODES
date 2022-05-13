#include <iostream>
using namespace std;
int binarySearch(int arr[],int key)
{
    int i = 0;int j = 6;int mid =0;
    while(i <= j){
        mid = (i+j)/2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid]>key)
            j = mid-1;
        else    
            i = mid+1;
    }
    return -1;
}
int main(){

    int arr[7] = {1,2,3,4,5,6,7};
    int key = 5;
    cout<< binarySearch(arr,key);

    return 0;
}