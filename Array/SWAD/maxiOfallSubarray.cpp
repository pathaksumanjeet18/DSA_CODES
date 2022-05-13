#include <bits/stdc++.h>
using namespace std;
int main(){

    int n = 8;
    int arr[8] = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    queue<int> q;
    int i = 0;int j = 0;
    while(j<n){
        while(q.size()>0 && q.front()<arr[j]){
            q.pop();
        }
        q.push(arr[j]);
        if(j-i+1 <3)
            j++;
        if(j-i+1 == 3){
            cout<<q.front()<<" ";
            if(q.front()==arr[i])
                q.pop();
            i++;j++;
        }
    }


    return 0;
}