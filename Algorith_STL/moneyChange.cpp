#include <iostream>
#include <algorithm>
using namespace std;
bool comparator(int a,int b){
    return a <= b;
}
int main(){

    //Indian Money Change
    int coins[] = {1,2,5,10,20,50,100,200,500,2000};
    int money = 100;

    auto it = lower_bound(coins,coins+10,money,comparator);
    cout<<it-coins-1;

    return 0;
}