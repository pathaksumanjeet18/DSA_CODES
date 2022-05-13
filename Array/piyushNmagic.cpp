#include <iostream>
using namespace std;
int main(){
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    char arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int i = 0,j = 0;
    bool flag = true;
    while(i<n){
        if(s<=k){
            flag = false;
            break;
        }
        
        if(arr[i][j] == '.'){
            s -= 2;
        }
        if(arr[i][j] == '*'){
            s += 5;
        }
        if(arr[i][j] == '#'){
            i++;
            j = 0;
            continue;
        }
        if(j==n-1){
            i++;j=0;
            
        }
        else{
            s -= 1;
            j++;
        }
        
    }
    if(flag){
        cout<<"YES\n";
        cout<<s;
    }
    else{
        cout<<"No\n";
    }

    return 0;
}