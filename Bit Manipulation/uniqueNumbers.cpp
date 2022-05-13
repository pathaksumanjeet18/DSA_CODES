#include <iostream>
using namespace std;
int main(){

    int arr[7] = {1,2,3,4,3,2,1};
    int sum = arr[0];
    //bitwise xor operator to solve
    //used in constant space
    for(int i = 1;i<7;i++){
        sum = sum ^ arr[i];
    }
    cout<<sum<<"\n";

    return 0;

}