#include <iostream>
using namespace std;
char nextAlpha(char arr[],char find,int n){
    char ans = '#';int i = 0;int j = n-1;
    while(i<=j){
        int mid = (i+j)/2;
        if(arr[mid]==find)
            i = mid + 1;
        else if(arr[mid]>find){
            ans = arr[mid];
            j = mid - 1;
        }
        else{
            
            i = mid + 1;
        }
    }
    return ans;
}
int main(){

    char arr[] = {'A','B','C','D','E'};
    char find = 'B';
    int n = sizeof(arr)/sizeof(int);
    cout<<nextAlpha(arr,find,n);


    return 0;
}