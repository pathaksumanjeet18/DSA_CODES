#include <iostream>
#include <cstring>
using namespace std;
int main(){

    int n;cin>>n;

    char a[1000];
    char largest[1000];
    cin.get();//to avoid \n change store error we take first \n for not getting input buufer
    int l = 0;int largest_len = 0;


    for(int i = 0;i<n;i++){
        cin.getline(a,1000);
        l = strlen(a);
        if(l>largest_len){
            largest_len = l;
            strcpy(largest,a);
        }

    }
    cout<<largest<< " "<<largest_len<<endl;



    return 0;
}