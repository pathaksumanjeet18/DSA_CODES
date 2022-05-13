#include<iostream>
using namespace std;
int main(){

    int count[64]= {0};//array of fixed size consider as o(1) space
    
    int n,no;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>no;
        //update the cnt array by extracting bits
        int j=0;
        while(no>0){
            int last_bit = (no&1);
            count[j] += last_bit;
            j++;
            no = no>>1;
        }


    }

    //iteratre over the array and reduce by mod 3
    int p =1;int ans = 0;
    for(int i =0;i<64;i++){
        count[i] %= 3;
        ans += (count[i]*p);
        p = p<<1;
    }
    cout<<ans<<endl;

    return 0;

}