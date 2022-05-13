#include <iostream>
using namespace std;
//to read sentences and paragraphs and store it
//cin.get() reads a single character
//put a loop to read characters till you get a new line '\n'
void readline(char a[],int maxLen,char delim = '\n'){

    int i = 0;
    char ch = cin.get();
    while(ch != delim){
        a[i] = ch;
        i++;
        if(i== (maxLen-1)){
            break;
        }
        ch = cin.get();
    }
    a[i] = '\0';
    return;

}
int main(){

    char a[1000];
    // readline(a,1000,'$');

    cin.getline(a,1000,'$');//cin.getline gives that facilities like out realines function
    // if delim is not there then auto take it as change line


    cout<<a<<endl;

    return 0;
}