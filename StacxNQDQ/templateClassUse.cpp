#include <iostream>
#include <vector>
using namespace std;

//Iplementation of stack data structure using vector
template<typename T,typename U> //use for generalize the code for all type of data types

class Stack{

private:
    vector<T> v;
    vector<U> v2;
public:
    void push(T data){
        v.push_back(data);
    }
    bool empty(){
        return v.size()==0;
    }
    void pop(){
        if(!empty()){
            v.pop_back();
        }
    }
    T top(){
        return v[v.size()-1];
    }


};

int main(){

    Stack<char,string> s;

    for(int i = 65;i<=70;i++){
        s.push(i);
    }
    //Try to print the content of the stack by popping each element
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}