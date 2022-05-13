#include <iostream>
using namespace std;
//1
void parametrised_sum(int i,int sum){
    if(i<1){
        cout<<sum<<" ";
        return;
    }
    parametrised_sum(i-1,sum+i);
}
int functional_sum(int n){
    if(n<1)
        return 0;
    return n + functional_sum(n-1);
}
//2
void reverse_Array(int arr[],int i,int j){
    if(i>=j){
        return;
    }
    swap(arr[i],arr[j]);
    reverse_Array(arr,i+1,j-1);
}
void reversi_Array(int arr[],int i,int n){
    if(i >= (n/2))
        return;
    
    swap(arr[i],arr[n-i-1]);
    reversi_Array(arr,i+1,n);
}
//3
bool palinString(string s,int i){
    if(i >= (s.size()/2))
        return true;
    if(s[i] != s[s.size()-i-1])
        return false;
    
    palinString(s,i+1);
}
int main(){

    int n;cin>>n;
    int arr[] = {1,2,3,4,5};
    parametrised_sum(n,0);
    cout<<functional_sum(n);
    cout<<endl;
    reverse_Array(arr,0,4);
    for(int i =0;i<5;i++)cout<<arr[i]<<" ";

    reversi_Array(arr,0,5);
    for(int i =0;i<5;i++)cout<<arr[i]<<" ";
    cout<<endl;
    
    string s = "ada";
    
    cout<<palinString(s,0)<<" ";
    return 0;
}


/*
    1-> sum of n numbers
    2-> Reverse an Array
    3-> palindrome

*/

