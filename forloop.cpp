// #include<iostream>
// using namespace std;
// int main() {
//     // int n;
//     // cin>>n;
//     // int sum=0;
//     // for(int i=1;i<=n;i++) {
//     //     sum=sum+i;
//     // }
//     // cout<<sum;

//     // int n;
//     // cin>>n;
//     // int sum=0;
//     // int a=0,b=1;
//     // cout<<a<<" "<<b;
//     // for(int i=1;i<=n-2;i++) {
//     //     sum=a+b;
//     //     a=b;
//     //     b=sum;
//     //     cout<<sum<<" ";
//     // }

//     for(int i=0;i<5;i++) { 
//         for(int j=i;j<=5;j++){
//             if(i+j==10) {
//                 break;
//             }
        
//         cout<<i<<" "<<j;
//           }
//     }

//     return 0;
// }


// 3*n+7;
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int i=10;i<=3*n+7;i=i+3) {
//         cout<<i<<" ";
// }
// }
// #include<iostream>
// using namespace std;
// int main() {
    // for(int a = 0, b =0; b<5 && a<5;a++,b++) {
    //      cout<<a<<" "<<b;
    //      cout<<endl;
    // }
//     int a = 0;
//     int b = 1;
//     int n;
//     cin>>n;
//     cout<<a<<" "<<b;
//     for(int i=2;i<n;i++) {
//         int sum = a+b;
//         cout<<sum<<endl;
//         a= b;
//         b = sum;
//     }
// }

#include<iostream>
using namespace std;
int main() {
    for(int i=0;i<=15;i++) {
    if(i&1) {
        cout<<i<<" ";
    }
    else {
        cout<<"hello";
    }
    }
}