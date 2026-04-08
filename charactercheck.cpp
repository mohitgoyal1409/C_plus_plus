#include<iostream>
using namespace std;
int main() {
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z') {
        cout<<"ch is a lowercase letter"<<endl;
    }
    else if(ch>='A' && ch<='Z') {
        cout<<"ch is a uppercase letter"<<endl;
    }
    else if(ch>='1' && ch<='9') {
        cout<<"ch is a number letter"<<endl;
    }
    else {
        cout<<"no invlaid";
    }

}