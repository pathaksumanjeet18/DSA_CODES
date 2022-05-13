#include <iostream>
using namespace std;
int main(){

    int **arr;
    int r,c;
    cin>>r>>c;


    //Create an array of row heads
    arr = new int*[r];

    //Create an 2d arrays
    for(int i = 0;i<r;i++){
        arr[i] = new int[c];
    }

    //take inputs and print the elements
    //practically we have created a 2d array by combining some linear arrays
    
    int val = 1;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            arr[i][j] = val;
            val++;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}