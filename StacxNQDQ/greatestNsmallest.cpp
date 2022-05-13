#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void nearestGreatertoright(int arr[]){
    vector<int> v;
    stack<int> s;
    int n = sizeof(arr[0])/sizeof(arr);
    for(int i = n-1;i>=0;i--){
        if(s.empty()){
            v.push_back(-1);
        }
        else if(s.top()>arr[i] and !s.empty()){
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=arr[i]){
            while(s.top()<=arr[i] and !s.empty()){
                s.pop();
            }
            if(s.size()==0)
                v.push_back(-1);
            else    
                v.push_back(s.top());
        }
        s.push(arr[i]);
        
    }
    //reverse vector and print v;
}
void nearestGreatertoleft(int arr[]){
    vector<int> v;
    stack<int> s;
    int n = sizeof(arr[0])/sizeof(arr);
    for(int i = 0;i<n;i++){
        if(s.empty()){
            v.push_back(-1);
        }
        else if(s.top()>arr[i] and !s.empty()){
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=arr[i]){
            while(s.top()<=arr[i] and !s.empty()){
                s.pop();
            }
            if(s.size()==0)
                v.push_back(-1);
            else    
                v.push_back(s.top());
        }
        s.push(arr[i]);
        
    }
    
}
void nearestSmallertorleft(int arr[]){
    vector<int> v;
    stack<int> s;
    int n = sizeof(arr[0])/sizeof(arr);
    for(int i = 0;i<n;i++){
        if(s.empty()){
            v.push_back(-1);
        }
        else if(s.top()<arr[i] and !s.empty()){
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()>=arr[i]){
            while(s.top()>=arr[i] and !s.empty()){
                s.pop();
            }
            if(s.size()==0)
                v.push_back(-1);
            else    
                v.push_back(s.top());
        }
        s.push(arr[i]);
    }  
    
}
void nearestsmallertoright(int arr[]){
    vector<int> v;
    stack<int> s;
    int n = sizeof(arr[0])/sizeof(arr);
    for(int i = n-1;i>=0;i--){
        if(s.empty()){
            v.push_back(-1);
        }
        else if(s.top()>arr[i] and !s.empty()){
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=arr[i]){
            while(s.top()<=arr[i] and !s.empty()){
                s.pop();
            }
            if(s.size()==0)
                v.push_back(-1);
            else    
                v.push_back(s.top());
        }
        s.push(arr[i]);
        
    }
    //rev erse vector and print v;
}

int main(){

    int arr[] = {1,3,2,4};
    nearestGreatertoright(arr);

    return 0;
}