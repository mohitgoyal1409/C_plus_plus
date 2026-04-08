#include<iostream>
using namespace std;
int main() {
    // and operator
    cout<<(4|6)<<endl;
    // or operator  
    cout<<(4&6)<<endl;   
    // not operator
    cout<<(~2)<<endl;
    // xor operator
    cout<<(2^4)<<endl;
    // left shift operator
    cout<<(5<<2)<<endl;
    // right shift operator
    cout<<(16>>2)<<endl;
    int i=8;
    i++;
    cout<<i;
    int y=4;
    cout<<y++<<endl;

    int j = 7;
    cout<<++j<<endl;
    cout<<j++<<endl;
    cout<<j--<<endl;
    cout<<--j<<endl;
}

// i++ i = 3 , a = 2
// first use then increment
// example sum = a + i++
// sum = 2+3 = 5
// i=4