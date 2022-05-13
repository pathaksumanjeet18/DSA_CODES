#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int arr[] = {1,2,3,5,5};
    int n = sizeof(arr)/sizeof(int);

    //Search in a sorted array
    int key ;
    cin>>key;

    //for sorted array use Binary searh o(logn)

    //binary search return bool 
    bool present = binary_search(arr,arr+n,key);
    if(present){
        cout<<"present";
    }
    else{
        cout<<"Absent!";
    }


    //to get index 
    // lower_bound(s,e,k) and upper_bound(s,e,k)
    // these return address int* it

    auto lb = lower_bound(arr,arr+n,5);
    //return first greated than or equals
    cout<<lb-arr<<endl;//gives index

    auto ub = upper_bound(arr,arr+n,5);
    //return first element i,e strictly greater than the key
    cout<<ub-arr<<endl;

    cout<<"Occurrence of 5 is "<<(ub-lb)<<endl;


    return 0;
}