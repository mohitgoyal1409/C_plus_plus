#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main() {
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(8);
    cout<<"find 6 in "<<binary_search(v.begin(),v.end(),8)<<endl;
    cout<<"lowerbond"<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;

    int a=3;
    int b=4;
    cout<<min(a,b);
    cout<<max(a,b);
    swap(a,b);
    cout<<a;

    string ab="mohit";
    reverse(ab.begin(),ab.end());
    cout<<ab;

    rotate(v.begin(),v.begin()+1,v.end());
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<endl;
    }

}