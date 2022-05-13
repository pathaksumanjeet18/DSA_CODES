#include <iostream>
using namespace std;
int main(){
    //all number repeat twice execpt two numbers
    //print smaller first

    //do it in linear and constant space
     int n;cin>>n;
     int no[n];
     int res = 0;
     
     for(int i =0;i<n;i++){
         cin>>no[i];
        res = res^no[i];

     }
     int temp = res;int pos = 0;
     while((temp&1)!=1){
         pos++;
         temp = temp>>1;
     }
     int mask = (1<<pos);
     int x = 0;int y = 0;
     for(int  i = 0;i<n;i++){
         if(no[i]&mask > 0){
             x = x^no[i];
         }
     }
     y = res^x;
     cout<<min(x,y)<<max(x,y);

    return 0;
}