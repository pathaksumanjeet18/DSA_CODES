#include <iostream>
#include <climits>
using namespace std;
void selectionsort(int arr[]){
    int n = 6;
    for(int i = 0;i<n-1;i++){
        int ind = i;
        //find min element's index
        for(int j = i;j<n;j++){
            if(arr[j]<arr[ind]){
                ind = j;
            }
        }
        //now swap it
        swap(arr[i],arr[ind]);
    
    }
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[6] = {5,8,4,1,3,2};
    selectionsort(arr);

    return 0;
}