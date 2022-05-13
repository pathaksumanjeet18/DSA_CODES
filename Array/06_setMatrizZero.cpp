#include <iostream>
using namespace std;
int main(){

    int arr[4][4] = {{1,1,1,1},{1,0,1,1},{1,1,0,1},{0,0,0,1}};
    bool col = false;
    bool row = false;
    for(int i = 0;i<4;i++){
        for(int j = 0 ;j<4;j++){
            if(arr[i][j]==0){
                if(i==0 && j==0){
                    col = true;
                    row = true;
                }
                else if(i==0){
                    arr[i][0] = 0;
                    row = true;
                }
                else if(j==0){
                    arr[0][j] = 0;
                    col = true;
                }
                else{
                    arr[0][j] = 0;
                    arr[i][0] = 0;
                }
                 
            }
        }
    }
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            if(arr[i][j] == 1){
                if(i==0){
                    if(row)
                        arr[i][j] = 0;
                }
                else if(j==0){
                    if(col)
                        arr[i][j] = 0;
                }
                else{
                    if(arr[0][j] == 0 or arr[i][0] == 0){
                        arr[i][j] = 0;
                    }
                }
            }

        }
    }
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    
    return 0;
}