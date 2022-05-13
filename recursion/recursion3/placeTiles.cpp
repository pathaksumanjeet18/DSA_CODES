#include <iostream>
using namespace std;
//given a wall of size of 4XN and tiles of size(1,4) and (4,1). \
//In how many ways you can build the wall?
int placeTiles(int n){
    if(n<=3)
        return 1;
    
    return placeTiles(n-1) + placeTiles(n-4);

}
int main(){

    int n;cin>>n;
    cout<<placeTiles(n);

    return 0;
}