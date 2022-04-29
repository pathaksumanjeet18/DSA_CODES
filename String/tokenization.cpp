#include <iostream>
#include <algorithm>
#include <cstring>

/*
    char *strtok(char *s,char *delimiters)
    returns a token on each subsequent call
    on the first call function should be passed with string argument for s
    on subsequent call we should pass the string argument as null
*/
using namespace std;
int main(){

    char s[100] = "Today is a day";

    char *ptr = strtok(s," ");
    cout<<ptr;
    //if we pass null it not disturb the state of string and prints the other token
    ptr = strtok(NULL," ");
    cout<<ptr;
     ptr = strtok(NULL," ");
    cout<<ptr;
     ptr = strtok(NULL," ");
    cout<<ptr;
     //ptr = strtok(NULL," ");//will be null in return
//fina;;y value becomes NULL
    cout<<ptr;
    cout<<"p";

    char a[50] = "hello world kaise ho";
    char *rt = strtok(a," ");
    cout<<rt<<endl;
    while(rt!=NULL){
         rt = strtok(NULL," ");
    cout<<rt<<endl;
    }


    return 0;
}