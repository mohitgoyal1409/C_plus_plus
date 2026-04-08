// #include<iostream>
// using namespace std;
// int main() {
//     char ch;
//     cin>>ch;
//     if((ch>='a'&& ch<='z') && (ch>=97 && ch<=122) ) {
//         cout<<"this is lower case";
//     }
//     else if((ch>='A' && ch<='Z') && (ch>=65 && ch<=90) ) {
//         cout<<"this is upper case";
//     }
//     else if(ch>='0' && ch<='9') {
//         cout<<"this is a number";
//     }

// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n,result,balance;
//     cin>>n;
//     switch (1) {
//         case 1 : result=n/100;
//                    balance = n-result*100;
//                    cout<<result<<endl;
//         case 2 : result=balance/50;
//                    balance=balance-result*50;
//                    cout<<result<<endl;
//         case 3 : result=balance/10;
//                    balance=balance-result*10;
//                    cout<<result<<endl;
//                    break;
//         default : cout<<"invalid number";
//     }

// }

#include<iostream>
using namespace std;
int main() {
     
    int n=1;
    char ch = 'a';
    switch (ch) {
    case 1:  cout<<"first"<<endl;
        break;
    
    case 'a': switch(n) {
         case 1 : cout<<"num is "<<n<<endl;
         break;
    }
         break;
    default:  cout<<"invalid"<<endl;
    }
}












// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     switch (1) {
//         // case 1:amount=n/100;
//         // int balance1=n-amount*100;
//         // cout<<balance1;
//         // case 2:amount=n/50;
//         // balance2=n-ba


//     }
// }