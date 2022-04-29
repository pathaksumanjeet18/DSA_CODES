#include <iostream>
using namespace std;
int main(){

    //Allocation and Deallocation Happens while compile time
    int b[100];
    cout<<sizeof(b)<<endl;
    cout<<b<<endl;//symbol table
    //b cannot be written as b is constant it's a part of symbol table

    //Dynamic Allocation(Created on the fly)
    int n;cin>>n;
    int *a = new int[n];
    cout<<a<<endl; // variable a that is created inside the static memory -> overwrited
    //a = new char[30];


    cout<<sizeof(a)<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }

    //Free Up the space 
    delete []a;
    //till not allocated garbage values
     

    return 0;
}