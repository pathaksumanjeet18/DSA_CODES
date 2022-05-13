//given a 2d array sorted means last element of previous row is greater than the first element of present row
// bascially we r trying to apply binary search as all ther in sorted form na
#include <iostream>
using namespace std;
int main(){

    int arr[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,50}};
    int i = 0;int j = (3*4) - 1;
    int target = 30;//log2(n*m);
    while(i<=j){
        int mid = (j+i)/2;
        if(arr[mid/4][mid%4] == target){//sochna smjh aaygea basic logic se col row nikala rha hai
            cout<<"True "<<mid/4<<","<<mid%4<<endl;
            break;
        }
        else if(arr[mid/4][mid%4] > target){
            j = mid - 1;
        }
        else{
            i = mid+1;
        }
    }

    return 0;
}