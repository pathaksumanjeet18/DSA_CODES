#include <iostream>
#include <stack>
using namespace std;
//order of n and only once push and pop
void stockSpan(int price[],int n,int span[]){//nearest greater to right
    stack<int> s;//indices of the days
    s.push(0);
    span[0] = 1;

    //loop for the rest of the days
    for(int i = 1;i<=n-1;i++){
        //topmost elment that is higher the current
        int curentprices = price[i];
        while(!s.empty() and price[s.top()]<=curentprices){
            s.pop();
        }
        if(!s.empty()){
            int prev_highest = s.top();
            span[i] = i-prev_highest;
        }
        else{
            span[i] = i+1;
        }
        //push this element into the stack
        s.push(i);
    }

}

int main(){
    
    int prices[] = {100,80,60,70,60,75,85};
    int n = sizeof(prices)/sizeof(int);
    int span[100000] = {0};
    stockSpan(prices,n,span);
    for(int i = 0;i<n;i++)
    {
        cout<<span[i]<<" ";
    } 
    return 0;
}