#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a,int b){
   // cout<<"COmparing "<<a<<" "<<b<<endl;//comaparsion are doine internally    
    return a<b;
}
int main(){

    int arr[5] = {1,2,4,3,6};
    sort(arr,arr+5,compare);//passing funtion in a function as a parameter
    for(int i = 0;i<5;i++)
    {
        cout<<arr[i]<<",";
    }
    return 0;
}