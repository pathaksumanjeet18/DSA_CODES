//we have to find out the majority elemnts in the given array
#include <iostream>
using namespace std;
//we can solve it using map or pair that would store no of the elemnts of particular eleemtn
//second we can use moore vooting algorithm o(n)
int main(){

    int arr[16] = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    
    int cnt = 0;int ele = 0;
    for(int i = 0;i<16;i++){
        if(cnt == 0){
            ele = arr[i];
        }
        if(ele == arr[i])
            cnt++;
        else    
            cnt--;
    }
    cout<<ele<<" ";



    return 0;
}