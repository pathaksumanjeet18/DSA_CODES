#include <iostream>
#include <stack>
using namespace std;
bool isValidExp(char *s){

    stack<char> sbracket;

    for(int i = 0;s[i]!='\0';i++){
        char ch = s[i];
        if(ch=='('){
            sbracket.push(ch);
        }
        else if(ch==')'){
            if(sbracket.empty() or sbracket.top()!='('){
                return false;
            }
            sbracket.pop();
        }
    }
    return sbracket.empty();

}
int main(){
    
    char s[100] = "((a+b)+(c-d+f))";
    if(isValidExp(s)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

    return 0;
}