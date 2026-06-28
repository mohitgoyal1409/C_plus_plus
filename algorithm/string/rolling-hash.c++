#include<iostream>
using namespace std;

int main() {

    string text = "abxabc";
    string pat = "abc";
    int k = 3;

    int hash = 0;
    int pat_hash = 0;

    // First window
    for(int i = 0; i < k; i++) {
        hash += text[i];
        pat_hash += pat[i];
    }

    cout << hash << endl;

    for(int i = k; i < text.size(); i++) {

        hash =  hash-text[i-k]+text[i];
 
        if(hash == pat_hash) {
            cout << "Pattern found at index " << i-k+1 << endl;
        }
    }
}