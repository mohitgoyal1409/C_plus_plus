#include<iostream>
using namespace std;

int main() {
    
    string s = "abcbe";
    int left = 0;
    int right = s.length() - 1;

    while(left<right) {
        if(s[left]!=s[right]) {
            cout<<"Not a palindrome"<<endl;
            return 0;
        }
        left++;
        right--;
    }
    cout<<"Palindrome"<<endl;
}