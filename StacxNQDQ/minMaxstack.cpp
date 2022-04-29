#include <iostream>
#include <vector>

using namespace std;

class MinMaxStack{

    vector<int> stack;
    vector<int> min_stack;
    vector<int> max_stack;

  public:
    void push(int data){
        int curr_min = data;
        int curr_max = data;

        if(min_stack.size()){
            curr_min = min(min_stack[min_stack.size()-1],data);
            curr_max = max(max_stack[max_stack.size()-1],data);
        }
        min_stack.push_back(curr_min);
        max_stack.push_back(curr_max);
    }
    int get_min(){
        return min_stack[min_stack.size()-1];
    }
    int get_max(){
        return max_stack[max_stack.size()-1];
    }
    void pop(){
        min_stack.pop_back();
        max_stack.pop_back();
        stack.pop_back();
    }
    int top(){
        return stack[stack.size()-1];
    }
    bool empty(){
        return stack.size()==0;
    }

};
int main(){
    
    


    return 0;
}