#include <iostream>
using namespace std;
bool compare(int a,int b){
    return a>b;
}
void bubble(int arr[]){
    int n = 6;
    for(int i = 0 ;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j+1]<arr[j])
                swap(arr[j+1],arr[j]);
        }
    }
     for(int i = 0;i<n;i++)
    {
        // cout<<arr[i]<<" ";
        cout<<*(arr+i)<<" ";//array is actually a pointer only
    }

}
//Using Comparator
void bubblecomp(int arr[] ,bool  (&comp)(int a,int b)){
    int n = 6;
    for(int i = 0 ;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            if(comp(arr[j+1],arr[j]))
                swap(arr[j+1],arr[j]);
        }
    }
     for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main(){

    int arr[6] = {5,4,8,3,2,1};
    bubble(arr);
    bubblecomp(arr,compare);

    return 0;
}