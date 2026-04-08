#include<iostream>
using namespace std;
#include<array>
int main() {
    array<int,4> a={1,2,3,4};
    int size=a.size();
    cout<<size<<" ";
    for(int i=0;i<4;i++) {
        cout<<a[i]<<" ";
    }
    cout<<a.empty()<<endl;
    cout<<a.at(2)<<endl;
    cout<<"first element"<<a.front()<<endl; 
    cout<<"last element"<<a.back();


}