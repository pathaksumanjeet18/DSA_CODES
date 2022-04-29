#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){


    //Pair 
    pair<int,char> p;
    p.first = 10;
    p.second = 'A';

    //Another Way
    pair<int,char> p2(p);
    cout<<p2.first<<" "<<p2.second<<endl;

    pair<int,string> p3 = make_pair(100,"A");
    cout<<p3.first<<" "<<p3.second<<endl;
    cin>>p3.first;
    cout<<p3.first;

    //Arrays of pair vectors of pair

    pair<pair<int,int>,string> car;
    car.first.first = 10;
    car.first.second = 20;


    return 0;
}