#include <iostream>
using namespace std;
bool canPlacecows(int stalls[],int n,int c , int min_sep){
    int last_cow = stalls[0];
    int count = 1;
    for(int i = 1;i<n;i++){
        if(stalls[i]- last_cow >= min_sep){
            last_cow = stalls[i];count++;
            if(count==c){
                return true;
            }
        }


    }
    return false;
}
int main(){

    int stalls[] = {1,2,4,8,9};
    int n = 5;
    int cows = 3;

    //binary search algorithm
    int s = stalls[0];
    int e = stalls[n-1] - stalls[0];

    int ans = 0;
    while(s<=e){
        int mid = (s+e)/2;

        bool cowsplace = canPlacecows(stalls,n,cows,mid);
        if(cowsplace){
            ans = mid;
            s = mid + 1;

        }
        else{
            e = mid - 1;
        }
    }
    cout<<ans<<"\n";

    return 0;
}