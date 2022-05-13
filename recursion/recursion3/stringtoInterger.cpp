#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int stringtoInt(char *a,int n){
    if(n==0)
        return 0;
    
    int digit = a[n-1] - '0';//last digit
    int small_ans = stringtoInt(a,n-1);
    return small_ans*10 + digit;
}
int main(){

    char a[] = "1234";
    int len = strlen(a);
    
    int x = stringtoInt(a,len);
    cout<<x<<" "<<x+1;

    return 0;
}