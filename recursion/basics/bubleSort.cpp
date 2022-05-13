#include <iostream>
using namespace std;
//bubble sort recursively
void bubbly(int arr[],int n){
    //base case
    if(n==0 or n==1)
        return;
    
    //recur case
    for(int j = 0;j<n-1;j++)
    {
        if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);

    }
    bubbly(arr,n-1);
}
void bulla(int arr[],int j ,int n){///withput any for loop
    //base case
    if(n==1)
        return;
    //
    if(j==n-1)
    {
        return bulla(arr,0,n-1);
    }
    //recc case
    if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    bulla(arr,j+1,n);
    return;

}
int main(){

    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    bubbly(arr,n);


    return 0;
}



