#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;cin>>n;

    int arr[n][n];
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i =0;i<n;i++){
        reverse(arr[i],arr[i]+n);
    }
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i<j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    


    return 0;
}