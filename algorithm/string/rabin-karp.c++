#include<iostream>
using namespace std;

int main() {
    string s = "abxabc";
    string pat = "abc";

    int n = s.size();
    int m = pat.size();

    for(int  i = 0; i<= n-m;i++) {
        if(s.substr(i,m) == pat) {
            cout<<s.substr(i,m)<<endl;
            cout<<"Found at index "<<i<<endl;
            return 0;
        }
    }
    cout<<"Not found"<<endl;
    return 0;
}