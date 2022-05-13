#include <iostream>
using namespace std;
//sort the array 
//use count sort
//DNF algorithm]

int main(){

    int arr[12] = {0,1,1,0,1,2,1,2,0,0,0,1};
    int n = 12;
    /*
    0 to low -1 ===> 0
    high+1 to n ===> 2
    */
    //swap low valuw wtih mid when mid points to 0;move low mid
    //if mid points 1 then move
    //mid points to 2 moves 
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    int low = 0 ;int mid = 0;int high = n-1;
    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[mid],arr[low]);
            low++;mid++;
        }
        else if(arr[mid]==2){
            if(arr[high]==2){
                high--;
            }
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
        else{
            mid++;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}