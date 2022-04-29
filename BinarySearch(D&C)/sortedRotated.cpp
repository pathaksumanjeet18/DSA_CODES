#include<iostream>
using namespace std;
int searchMinin(int arr[],int n){
    int i = 0;int j = n-1;
    while(i<=j){
        int mid = i + (j-i)/2;
        if(arr[mid]<arr[(mid-1+n)%n] && arr[mid]<arr[(mid+1)%n])
            return mid;
        else if(arr[mid]<=arr[i]){
            j = mid - 1;
        }
        else if(arr[mid]>=arr[j]){
            i = mid + 1;
        }
        
    }
}
int binarySerach(int arr[],int ind,int n,int element){
    int i=ind;int j = n;
    while(i<=j){
        int mid = (i+j)/2;
        if(arr[mid]==element)
            return mid;
        else if(arr[mid]>element){
            j = mid - 1;
        }
        else{
            i = mid + 1;
        }
    }
    return 0;

}
int findElement(int arr[],int n,int element,int ind){
    int x = binarySerach(arr,ind,n-1,element);
    int y = binarySerach(arr,0,ind,element);
    if(x){
        cout<<x<<endl;
    }
    else{
        cout<<y<<endl;
    }
}
int main(){

    int arr[5] = {3,4,5,1,2};
    cout<<searchMinin(arr,5);
    cout<<findElement(arr,5,2,searchMinin(arr,5))<<endl;
    return 0;
}