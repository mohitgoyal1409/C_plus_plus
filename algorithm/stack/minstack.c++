#include<iostream>
#include<stack>
using namespace std;

class Minstack{
    public:
    stack<pair<int,int>> s;

    void push(int val) {
        if(s.empty()) {
            s.push({val,val});
        }
        else {
            int minVal = min(val , s.top().second);
            s.push({val,minVal});
        }
    }

    void pop() {
       s.pop();
    }

    int top() {
        return s.top().first;
    }

    int getMin() {
        return s.top().second;
    }
};

int main() {
    Minstack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout<<minStack.getMin()<<endl; // return -3
    minStack.pop();
    cout<<minStack.top()<<endl;    // return 0
    cout<<minStack.getMin()<<endl; // return -2
}