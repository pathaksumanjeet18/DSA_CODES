#include <iostream>
using namespace std;
void spiralPrint(int arr[][1000],int n,int m){

    int st_row = 0;int end_row = n-1;int st_col = 0;int end_col = m-1;
    while(st_row<=end_row and st_col<=end_col){
         for(int i = st_col;i<=end_col;i++){
             cout<<arr[st_row][i]<<" ";
         }st_row++;
         for(int i = st_row;i<=end_row;i++){
             cout<<arr[i][end_col]<<" ";
         }end_col--;

         if(end_row>st_row){
            for(int i = end_col;i>=st_col;i--){
                cout<<arr[end_row][i]<<" ";
            }end_row--;
         }

        if(end_col>st_col){
            for(int i = end_row;i>=st_row;i--){
                cout<<arr[i][st_col]<<" ";
            }st_col++;
        }
    }

}
int main(){

    int n,m;
    cin>>n>>m;
    int arr[1000][1000] = {0};
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    spiralPrint(arr,n,m);

    return 0;
}