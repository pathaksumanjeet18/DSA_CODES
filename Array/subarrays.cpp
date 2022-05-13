#include <iostream>
#include <climits>
using namespace std;


//if All elements are negative
void negativeElemtns(int arr[],int n){
    int max_sum = INT_MIN;
    int curr = arr[0];
    for(int i = 1;i<n;i++){
                 

        curr = max(curr+arr[i],arr[i]);
        max_sum = max(curr,max_sum);
    }
    cout<<max_sum;//wrong
}
//N Kadane Algorithm
void kadaneAlgo(int arr[],int n){
    int currSum = 0;
    int maxSum = 0;
    for(int i = 0;i<n;i++){
        currSum += arr[i];
        if(currSum<0)
            currSum = 0;
        
        if(currSum>maxSum)
            maxSum = currSum;
    }cout<<maxSum;
}
//Circular MAX SubArray
void circular(int arr[],int n){
    int curSum = 0;int maxSum = 0;
    for(int i = 0;i<n;i++){
        
    }
}

//N2 Cummalitive Sum
void maxSumCumm(int arr[],int n){
    int currSum[n] = {0};
    currSum[0] = arr[0];
    currSum[-1] = 0;
    for(int i = 1;i<n;i++){
        currSum[i] = currSum[i-1] + arr[i];
    }
    int maxSum = INT_MIN;
    int currSumm = 0;
    for(int i = 0;i<n;i++){
                            currSumm = 0;

        for(int j = i;j<n;j++){

            currSumm = currSum[j]-currSum[i-1];
            if(currSumm>maxSum)
            {
                maxSum = currSumm;
            }
        }
    }
    cout<<maxSum;
}
//N3 is the order
void maxSum(int arr[],int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            currSum = 0;
            for(int k = i;k<=j;k++){
                currSum += arr[k];
            }
            if(currSum>maxSum)
                maxSum = currSum;
        }
    }
    cout<<maxSum<<"\n";

}
void printSubarray(int arr[],int n){
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            for(int k = i;k<=j;k++){
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
    }
}
int main(){

    int arr[9] = {-4,-1,-3,-2,-16,-2,-8,-9,-4};
    // printSubarray(arr,5);
    kadaneAlgo(arr,9);
    negativeElemtns(arr,9);
    return 0;
}