#include <iostream>
using namespace std;
int main(){

    int n;cin>>n;

    int arr[n][n];
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    //Corner Two elemnts are not good position to enter the matrix
    //two elements can help
    int i =n-1;int j = 0;int key = 10;
    while(i>=0 && j<n){
        if(arr[i][j]==key){
            cout<<i<<" "<<j;
            break;
        }
        if(arr[i][j]>key){
            i--;
        }
        else{
            j++;
        }
        

    }
     
    return 0;
}