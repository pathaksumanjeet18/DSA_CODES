#include<bits/stdc++.h>
using namespace std;
int main(){

    string s = "aabacebebebe";
    int k = 3;
    int i = 0;int j = 0;int maxi = INT_MIN;
    map<char,int> m;
    while(j<s.length()){
        m[s[j]]++;
        
        if(m.size() < k){
            j++;
        }
        else if(m.size()==k){
            maxi = max(maxi,j-i+1);
            j++;
        }
        else if(m.size()>k){
            while(m.size()>k){
                m[s[i]]--;
                if(m[s[i]]==0)
                    m.erase(s[i]);
                i++;
            }
       
            j++;
        }
    

    }

    cout<<maxi<<" ";



    return 0;
}