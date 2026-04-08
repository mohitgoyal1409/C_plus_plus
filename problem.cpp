#include<iostream>
#define INT_MAX 2147483647
#define INT_MIN -2147483647
using namespace std;
int main() {
    int x;
    cin>>x;      
    int digit;
    int rev=0;
    while(x!=0) {
        digit= x%10;
        x=x/10;
        if (rev > INT_MAX / 10 || (rev < INT_MIN/10)) return 0;
        rev=rev*10+digit;
    }
    return rev;
    }