#include<iostream>
using namespace std;
 
int searchkey(int arr[],int n,int key){
    int left = 0;int right = n-1;int mid;
    while(left<=right){
        mid = (left+right)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid] <= key && arr[right]>=key){
                left = mid + 1;
        }
        else{
                right = mid - 1;
            }
    
        // else if(arr[mid] >= key && arr[left]<=key){
        //         right = mid - 1;
        //     }
        //     else{
        //         left = mid + 1;
        //     }
        // }
    }
    return -1;
   //refer video**** 
}
int main(){
    int n;cin>>n;
     int arr[n];
     for(int i =0;i<n;i++){
         cin>>arr[i];
     }
     int key;cin>>key;
    cout<< searchkey(arr,n,key);

    return 0;
}