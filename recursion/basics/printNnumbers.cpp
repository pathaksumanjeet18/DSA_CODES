#include <iostream>
using namespace std;
void decprint(int n){
    //base case
    if(n==0){
        return;
    }
    
    //recur case
    cout<<n<<" ";
    decprint(n-1);
    
     
}
void inrprint(int n){
    //base case
    if(n==0)
        return;
    
    inrprint(n-1);
    cout<<n<<" ";

}
int main(){
    int n = 5;
    decprint(n);
    inrprint(n);
    return 0;
}