#include <iostream>
using namespace std;
//generate balanced brackets using N pairs of round Brackets
void generate_brackets(char *out,int n ,int i,int open,int close){
    //base case
    if(i==2*n)
    {
        out[i] = '\0';
        cout<<out<<endl;
        return;
    }
    //recr case
    //2 options
    if(open<n){
        out[i] = '(';
        generate_brackets(out,n,i+1,open+1,close);
    }
    if(close<open){
        out[i] = ')';
        generate_brackets(out,n,+1,open,close+1);
    }
    return;

}
int main(){

    //geerate brackets
    int n;
    cin>>n;
    char output[10000];
    int i = 0;
    generate_brackets( output,n,0,0,0);

    return 0;
}