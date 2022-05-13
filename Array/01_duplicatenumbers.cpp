#include<iostream>
using namespace std;
//Given an array find out the duplicate number in the aaray
//1 sort and findout
//2  make a freq array
//3 linked list cycle method
int main(){

    int arr[10] = {2,3,9,6,9,3,8,9,7,1};

    int slow = arr[0];
    int fast = arr[0];
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow!=fast);

    fast = arr[0];
    while(slow!= fast){
        slow = arr[slow];
        fast = arr[fast];
    }

    cout<<slow;


    return 0;
}