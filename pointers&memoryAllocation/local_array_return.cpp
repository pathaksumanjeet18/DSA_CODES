#include <iostream>
using namespace std;
int* fun(){
    // int a[] = {1,2,3,4,5};
    //so that why use to dyanamic one in this case
    int *a = new int[3];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    cout<<a<<endl;
    cout<<a[0]<<endl;

    // we shold never return a local variable;
    return a;
}
int main(){

    int *b = fun();//it will store the address af a as its a point type 

    cout<<b<<endl;//return address
    cout<<b[0]<<endl;//it wont return value as 'a' was destroyed in call stack only
    //it migth print 1 as value must be there or garbage or it can be segmentation fault

    //now clear the array a
    delete []b;//delete dyanamic array

    

    return 0;
}