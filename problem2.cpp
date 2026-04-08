#include<iostream>
using namespace std;
#include<math.h>
int main() {
    int n;
    cin>>n;
    int x=n;
    bool y=true;
    int count=0;
    while(n>0) {
        if(n%2==0) {
            count++;
        }
        n=n/2;
    }
    n=x;
    if(pow(2,count)==n) {
        bool y= 1;
        cout<<y;
    }
    else {
        bool y= false;
        cout<<y;}
    return 0;

}