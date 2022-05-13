#include<iostream>
using namespace std;
int main(){

    int nums[8] = {1,1,1,3,3,2,2,2};
    int num1 = -1;int num2 = -1;
    int c1 = 0;int c2 = 0;
    for(int it = 0;it<8;it++){
        if(nums[it] == num1)
            c1++;
        else if(nums[it]==num2)
            c2++;
        else if(c1 == 0){
            num1 = nums[it];
            c1 = 1;
        }
        else if(c2 == 0){
            num2 = nums[it];
            c2 = 1;
        }
        else{
            c1--;
            c2--;
        }
    }
    // vector<int>ans;
    //incomple likh lena



    return 0;
}