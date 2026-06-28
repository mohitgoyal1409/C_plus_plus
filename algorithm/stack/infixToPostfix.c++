#include<iostream>
using namespace std;
#include<stack>

int prec(char c) {
    if(c=='^') {
        return 3;
    }
    else if(c == '*' || c == '/') {
        return 2;
    }
    else if(c == '+' || c == '-') {
        return 1;
    }
    else {
        return -1;
    }
}

string  infixToPostfix(string s) {
    stack<char> st;
    string result;  

    for(int i = 0;i<s.length();i++) {
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z') {
            result = result + s[i];
        }
        else if(s[i]=='(') {
            st.push(s[i]);
        }
        else if(s[i]==')') {
            while(!st.empty() && st.top() != '(' ) {
                result = result + st.top();
                st.pop();
            }
            if(!st.empty()) {
                st.pop();
            }
        }
        else {
            while(!st.empty() && prec(st.top()) > prec(s[i])) {
                result = result + st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        }
        while(!st.empty()) {
            result = result + st.top();
            st.pop();
        }
        return result;
    }

    int main() {
        cout<<infixToPostfix("(a-b/c)*(a/k-l)");
    }