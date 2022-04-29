#include <iostream>
#include <string.h>
using namespace std;
//replsce "pi" with "3.14"
// xpighpilmpipi --> x3.14gh3.14m3.143.14 inplace
void replacePi(char a[],int i){
    //base case
    if(a[i] == '\0' or a[i+1] == '\0')
        return;
    
    //look for pi at current position
    if(a[i]=='p' and a[i+1] == 'i' ){
        //shifitng  + replacment with 3.14
        int j = i+2;
        //take j to the end of the arr;
        while(a[j]!='\0')
            j++;
        while(j>=i+2){
            a[j+2] = a[j];
            j--;
        }
        a[i] = '3';
        a[i+1] = '.';
        a[i+2] = '1';
        a[i+3] = '4';
        replacePi(a,i+4);


    }
    else{
        //go to the next position
        replacePi(a,i+1);
    }
    return;
}
int main(){

    char a[] = "xpighpimpipi0";
    replacePi(a,0);
    cout<<a;

    return 0;
}

