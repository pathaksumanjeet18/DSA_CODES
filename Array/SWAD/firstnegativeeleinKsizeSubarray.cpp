#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int n = 8;
    int arr[n] = {12,-1,-7,8,-15,30,16,28};
    int k = 3;
    queue<int> store;
    int i = 0;int j = 0;
    while(j<n){
        if(arr[j]<0)
            store.push(arr[j]);
        
        if(j-i+1<k)
            j++;
        else if(j-i+1 == k){
            if(store.empty())
                cout<<"0 ";
            else    
                cout<<store.front()<<" ";
            
            if(arr[i]==store.front()){
                store.pop();
                i++;j++;
            }
            else{
                i++;j++;
            }

        }
        
    }


    return 0;
}