#include <iostream>
#include <cstring>
using namespace std;
void removeDuplicates(char a[]){

    int i = 0;
    int j = 1;
    if(strlen(a) == 0 || strlen(a)==1){
        return;
    }
    for(;j<strlen(a);j++){//cooooding
        if(a[j]!=a[i]){
            i++;
            a[i] = a[j];
        }

    }
    a[i+1]= '\0';
    cout<<a;
    return;

}
int main(){

    char a[1000];
    cin.getline(a,1000);
    removeDuplicates(a);
    return 0;
}