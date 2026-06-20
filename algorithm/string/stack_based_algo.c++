#include<iostream>
using namespace std;
#include<stack>

int main() {
    string s = "{[()]";
    stack<char> st;
    int n = s.size();
    for(int i=0;i<n;i++) {
        char c = s[i];
        if(c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if(st.empty()) {
                cout<<"Not balanced"<<endl;
                return 0;
            }
            char top = st.top();
            if((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                cout<<"Not balanced"<<endl;
                return 0;
            }
            st.pop();
        }
    }
    if(st.empty())
        cout << "Balanced";
    else
        cout << "Not balanced";

    return 0;
}