#include <iostream>
using namespace std;

//problem is to convert NUmber to its Spelling
// 2048 ---> two zero four eight
/*string spell(int n){
    if(n == 0)
        return "Zero";
    else if(n==1)
        return "One";
    else if(n==2)
        return "Two";
    else if(n==3)
        return "Three";
    else if(n==4)
        return "Four";
    else if(n==5)
        return "Five";
    else if(n==6)
        return "Six";
    else if(n == 7)
        return "Seven";
    else if(n==8)
        return "Eight";
    else
        return "Nine";
}
void spelling(int n){
    if(n==0)
        return;
    
    spelling(n/10);
    cout<<spell(n%10)<<" ";
    return;
}
*/
char words[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
void spelling(int n){
    if(n==0)
        return;
    
    //recur case first print the speeling of (204)
    spelling(n/10);
    cout<<words[n%10]<<" ";
    return;
}
int main(){

    int n;cin>>n;
    spelling(n);
    return 0;
}