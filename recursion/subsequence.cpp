#include <iostream>
#include <vector>
using namespace std;

//to have unique subset use pick non pic way then 
//store it in a set

void subsetGenerate(int i,int a[],vector<int> b,int n){
    if(i==n){
        for(auto it : b){
            cout<<it<<" ";
        }
        if(b.size() == 0)
            cout<<"{}";
        cout<<endl;
        return;
    }
    //pick the element
    b.push_back(a[i]);
    subsetGenerate(i+1,a,b,n);
    //not pic the element
    b.pop_back();
    subsetGenerate(i+1,a,b,n);



//reverse order would be non pic would be in front
}
//for every index we r having couple of options


void subsequenceOFk(int i,int a[],vector<int> b,int n,int sum,int target){
    if(i==n){
        if(sum == target){
            for(auto it : b){
                 cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //pick the element
    b.push_back(a[i]);
    sum += a[i];
    subsequenceOFk(i+1,a,b,n,sum,target);
    //not pic the element
    sum -= a[i];
    b.pop_back();
    subsequenceOFk(i+1,a,b,n,sum,target);

}
bool subsequenceOFkOne(int i,int a[],vector<int> b,int n,int sum,int target){
    if(i==n){
        if(sum == target){
            for(auto it : b){
                 cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
        return false;
    }
    //pick the element
    b.push_back(a[i]);
    sum += a[i];
    if(subsequenceOFkOne(i+1,a,b,n,sum,target))return true;///as if this recurssion call is true then no need of other recurssion call
    //not pic the element
    sum -= a[i];
    b.pop_back();
    if(subsequenceOFkOne(i+1,a,b,n,sum,target))return true;//if it get it the whats the further need na

    return false;

}

//no of subsequence count
bool subsequenceOFkOne(int i,int a[],int n,int sum,int target){
    if(i==n){
        if(sum == target){
           return 1;
        }
        return 0;
    }
    //pick the element
    
    sum += a[i];
    int l = subsequenceOFkOne(i+1,a,n,sum,target);///as if this recurssion call is true then no need of other recurssion call
    //not pic the element
    sum -= a[i];

    int r = subsequenceOFkOne(i+1,a,n,sum,target);//if it get it the whats the further need na

    return l+r;

}
int main(){

    int a[] = {1,2,1};
    int n = 3;
    vector<int> b;
    subsetGenerate(0,a,b,n);
    subsequenceOFk(0,a,b,n,0,2);
    subsequenceOFkOne(0,a,b,n,0,2);

    return 0;
}