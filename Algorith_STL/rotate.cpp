#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main(){

    
    int arr[] = {1,2,5,10,20,50,100,200,500,2000};
    int n = sizeof(arr)/sizeof(int);
    rotate(arr,arr+2,arr+n);
    for(int i =0;i<n;i++)
        cout<<arr[i]<<" ";


    //Apply the same on a vector
    vector<int> v = {10,2,2,5,20,39};
    rotate(v.begin(),v.begin()+2,v.end());
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<"\n";
    //Next_permutation
    next_permutation(v.begin(),v.end());
    for(int x : v){
        cout<<x<<" ";
    }
    reverse(arr,arr+4);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}