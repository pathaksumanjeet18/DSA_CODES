#include <iostream>
#include <climits>
using namespace std;
int main(){

    /*

    int arr[5] = {0}; //0,0,0,0,0 
    int arr[5];//garbage
    int arr[5] = {1,2,3};//1,2,3,0,0
    int arr[5] = {0};//0,0,0,0,0
    int arr[5] = {1};//1,0,0,0,0


    */

   int mini = INT_MAX;
   int maxi = INT_MIN;
    int arr[5] = {1,2,34,5,60};
    int n = 5;
   //traverse find max and min number in the given array
   //way2
   for(int i = 0;i<n;i++){
       mini = min(arr[i],mini);
       maxi = max(maxi,arr[i]);

   }
   

    return 0;
}