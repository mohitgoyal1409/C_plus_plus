#include<iostream>
using namespace std;
bool is_even(int n) {
    if(n&1) return false;
    else return true;
}
int main() {
    int n;
    cin>>n;
    int ans=is_even(n);
    cout<<ans;

}

// #include<iostream>
// using namespace std;
// int factorial(int a) {
//     int fact=1;
//     for(int i=1;i<=a;i++) {
//          fact=fact*i;
//     }
//     return fact;
// }

// int ncr(int n,int r) {
//     // cout<<n<<r;
//     int ans=factorial(n)/(factorial(r)*factorial(n-r));
//     return ans;
// }

// int main() {
//     int n;
//     int r;
//     cin>>n;
//     cin>>r;
//     int result=ncr(n,r);
//     cout<<result;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// bool is_prime(int n) {
//     for(int i=2;i<n;i++) {
//         if(n%i==0) {
//             return 0;
//         }
//      } 
//     return 1;
// }
// int main() {
//     int n;
//     cin>>n;
//     int ans=is_prime(n);
//     if(ans==1) cout<<"number is prime";
//     else cout<<"number is not prime";
//     return 0;

// }