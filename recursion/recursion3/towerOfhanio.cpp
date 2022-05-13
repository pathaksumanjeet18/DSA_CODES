#include <iostream>
using namespace std;
void toi(int n,char src,char helper,char dest){
     //base case
     if(n==0)
        return;

    //recur case
    //move n-1 disk from src to helper
    toi(n-1,src,dest,helper);
    cout<<"Shift disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    toi(n-1,helper,src,dest);
    
}
int main(){

    int n;
    cin>>n;
    toi(n,'A','B','C');

    return 0;
}