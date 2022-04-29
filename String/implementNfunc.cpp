#include <iostream>
#include <cstring>
using namespace std;
int main(){

    string s1 = "abc";
    string s2 = "okay plz";

    s1.append(s2);
    s1.clear();
    int indx = s1.find("pl");

    string word("pl");
    int len = word.length();

    cout<<s1<<endl;
    // s1.erase(indx,len);
    cout<<s1<<endl;

    //iteratoe over all the characters in the string

    for(int i =0;i<s1.length();i++){
        cout<<s1[i];
    }

    // iterator
    for(auto it = s2.begin();it < s2.end();it++){
        cout<<(*it)<<endl;
        cout<<&(*it);

    }
    for(auto c:s1){
        
        cout<<c;
    }


    for(string::iterator it = s2.begin();it!=s2.end();it++){
        cout<<*it<<endl;
    }



    return 0;
}