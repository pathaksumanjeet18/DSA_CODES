#include <iostream>
#include <climits>
using namespace std;
bool ispossible(int arr[],int n,int m,int curr_min){
    int studentUsed = 1;
    int pages_Reading = 0;
    for(int i = 0;i<n;i++){
        if(pages_Reading + arr[i]>curr_min){
            studentUsed++;
            if(studentUsed>m)
                return false;
        }
        else{
            pages_Reading += arr[i];
        }

    }
    return true;
    
}
int findPages(int arr[],int n,int m){
    long long sum = 0;

    //if N<M
    if(n<m){
        return -1;
    }

    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    int s = arr[n-1];
    int e = sum;
    int ans = INT_MAX;
    while(s<=e){
        int mid = (s+e)/2;

        if(ispossible(arr,n,m,mid)){
            ans = min(ans,mid);
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }

    }
    return ans;

}
int main(){

    int t;cin>>t;
    for(int i = 0;i<t;i++){
        int n , m;
        cin>>n>>m;

        int arr[100000];
        for(int j = 0;j<n;j++){
            cin>>arr[j];
        }
        cout<<findPages(arr,n,m)<<endl;
    }
    return 0;
}