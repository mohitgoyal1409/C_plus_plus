#include<iostream>
using namespace std;
#include<set>
int main() {
    set<int>s;
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(0);
    cout<<"5 is present or not"<<s.count(5);
}