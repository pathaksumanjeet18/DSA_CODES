#include <iostream>
using namespace std;
//pass by value
void increment(int a){
    a = a+1;
    cout<<"Inside function "<<a<<endl;
}
void increment1(int *a){//it takes address of a of called one
    *a = *a+1;//incement the value inside the addrss here *a is not a addrsss one now its taking value of a
    cout<<a<<endl;
    cout<<*a<<endl;
    cout<<"Inside function "<<a<<endl;
        cout<<"Inside function "<<*a<<endl;

}
int main(){

    int a = 10;
    increment(a);
    cout<<"Inside Main : "<<a<<endl;
    increment1(&a);
    cout<<&a<<endl;
    cout<<"Inside Main : "<<a<<endl;

    return 0;
}