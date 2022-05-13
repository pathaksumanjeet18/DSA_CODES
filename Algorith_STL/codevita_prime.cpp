#include <iostream>
#include<cmath>
using namespace std;
int noOfprime(int n){
    int count = 0;
    for(int i=2;i<=n;++i) 

    {   int ctr=0; 

        for(int j=2;j<=sqrt(i);++j) 

        {   
            if(i%j==0)
                ctr=1; 

        }

        if(ctr==0) 
            count++;
    }
    return count;

}

int main()
{   


    int n;
    cin>>n;
    int c = 100;
    int t = 0;
    while(c!=0){
        c = noOfprime(n);
        t++;
        noOfprime(n-c);
    }
    cout<<t<<endl;

    return 0;

}