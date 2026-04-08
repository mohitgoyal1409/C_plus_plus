// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int sum=0,count=0;
//     for (int i = 1; i <=n; i++) {
//         int count =0;
//         for(int j=1;j<=n;j++) {
//             if(i%j==0) {
//                 count++;
//             }
//         }
//         if(count==2) {
//             sum++;
//         }

//         // else cout<<"itn is  not a prime no";
//     }
//     cout<<sum;

    
// }
 
// prime no by sieve of eventain
// #include<iostream>
// using namespace std;
// #include<vector>
// int main() {
//     int n;
//     cin>>n;
//      int count=0;
//         vector<bool>prime(n+1,true);
//         prime[0]=prime[1]=false;
//         for(int i=2;i<n;i++) {
//             if(prime[i]) { count++;

//             for(int j=2*i;j<n;j=j+i) {
//                 prime[j]=0;
//             }
//             }
//         }
//         cout<<count;
    
// }

#include<iostream>
using namespace std;

int gcd(int a ,int b) {
    if(a==0) {
        return b;
    }
    if(b==0) {
        return a;
    }

    while(a!=b) {
        if(a>b) {
            a = a-b;
        }
        else {
            b = b-a;
        }
    }
    return a;
}

int main() {
    int a;
    int b;
    cin>>a>>b;
    int ans = gcd(a,b);
    cout<<ans;

}