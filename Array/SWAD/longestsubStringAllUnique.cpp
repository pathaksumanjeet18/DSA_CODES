#include<bits/stdc++.h>
using namespace std;
int main(){

    string s = "pwwkew";
    
    int i = 0;int j = 0;int maxi = INT_MIN;
    map<char,int> m;
    while(j<s.length()){
        m[s[j]]++;
        
        
        if(m.size()==(j-i+1)){
            maxi = max(maxi,j-i+1);
            
        }
        else if(m.size()<(j-i+1)){
            while(m.size()<(j-i+1)){
                m[s[i]]--;
                if(m[s[i]]==0)
                    m.erase(s[i]);
                i++;
            }
            
            
        }
        j++;

    }

    cout<<maxi<<" ";



    return 0;
}