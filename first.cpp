

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
//     for(int i=0;i<=n;i++) {
//         for(int j=0;j<=i;j++) {
//     int result=ncr(i,j);
//     cout<<result;
//         }
//         cout<<endl;
    
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int arr[5]={0};
//     for(int i=0;i<5;i++) {
//         cout<<arr[i]<<" ";
//     }
//     arr[2]++;
//     arr[2]++;
//     for(int i=0;i<5;i++) {
//         cout<<arr[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int arr[5]={0};
//     for(int i=0;i<5;i++) {
//         cout<<arr[i]<<" ";
//     }
// }

// C++ program to demonstrate
// anomaly of delimitation of
// getline() function
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int id;

     
    cout << "Please enter your id: \n";
    cin >> id;

    cout << "Please enter your name: \n";
    getline(cin, name);

    
    cout << "Your id : " << id << "\n";
    cout << "Hello, " << name << " welcome to GfG !\n";
    getline(cin, name);
    cout << "Hello, " << name << " welcome to GfG !\n";

    return 0;
}