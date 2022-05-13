#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    string s = "totmtaptat";
    string t = "tat";

    map<char,int> mp;
    for(int i =0;i<t.length();i++){
        mp[t[i]]++;
    }
    int count = mp.size();
    int i =0;int j = 0;int n = s.length();int mini = INT_MAX;
    while(j<n){
        if(mp.find(s[j])!=mp.end()){
            mp[s[j]]--;
            if(mp[s[j]]==0){
                count--;
            }
        }
        if(count>0)
            j++;
        else if(count == 0){
            mini = min(mini,j-i+1);
            while(count==0){
                

                if(mp.find(s[i])==mp.end()){                   
                    i++;
                    mini = min(mini,j-i+1);
                    
                }
                else{
                    mp[s[i]]++;
                    if(mp[s[i]] > 0){
                        count++;
                        i++;
                    }
                    else{
                        i++;
                        mini = min(mini,j-i+1);
                    }
                }
                
            }
            j++;
        }
    



    }
    cout<<mini<<" ";





    return 0;
}