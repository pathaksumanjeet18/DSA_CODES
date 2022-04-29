#include <iostream>
using namespace std;
int main(){

    int x = 10;
    cout<< &x <<endl;
    int y1 = 20;
    float y = 10.5;
    cout<< &y <<endl;



    // It doesnot work for character variables
    char ch = 'A';
    cout<<&ch;
    //Explicit Typecasting from char* to void* ...
    cout<<(void *)&ch<<endl;

    //Pointers
    int *xptr; // declare
    xptr = &x;

    cout<<&x<<endl;
    cout<<xptr<<endl;

    //Reassign another address to the variable
    xptr = &y1; 
    cout<<&y1<<endl;
    cout<<xptr<<endl;


    //Derefrencing Operator
     int z = 10;
     int *zptr;
     zptr = &z;


     cout<<&z<<endl;  //Address of z;
    cout<<zptr<<endl; //Address of z;

    cout<<*(&z)<<endl;   //Value of z or value stored at the address
    cout<<*(zptr)<<endl; //Value of z or value stored at the address

    cout<<*(&zptr)<<endl; // address of z
    cout<<&(*zptr)<<endl; // address of z

    cout<<&(zptr)<<endl;//address of zptr

    int **zzptr = &zptr;
    //a pointer to a pointer|
    cout<<zzptr<<endl;//adress of zptr , i.e, which sotres address of z and its address
    return 0;
}