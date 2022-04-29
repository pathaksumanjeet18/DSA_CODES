#include <iostream>
using namespace std;
void insertion(int arr[]){
    int n = 5;
    for(int i = 1;i<n;i++){
        int e = arr[i];
        int j = i-1;
        while(j>=0 and arr[j]>e){
            arr[j+1] = arr[j];
            j--; 
        }
        arr[j+1] = e;
    }
     for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[5] = {5,2,3,0,1};
    insertion(arr);

    return 0;
}