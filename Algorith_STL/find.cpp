#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    //Search --> find
    int key ;
    cin>>key;

    auto it = find(arr,arr+n,key);
    cout<<it<<endl;//return address


    //to get index;
    int index = it - arr;

    if(index == n){
        cout<<key<<" not present";
    
    }
    else{
        cout<<"Present at index "<<index;
    }

    return 0;
}