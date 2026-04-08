// #include<iostream>
// using namespace std;
// #define PI 3.14
// int main() {
//     int r;
//     cin>>r;
//     int area=PI*r*r;
//     PI = PI +1 not modify       
//     cout<<area;
// }


// local variable 
// #include<iostream>
// using namespace std;
// int main() {
//     int i=5;
//     cout<<i;
//     {
//         int i=2;
//         cout<<i;

//     }
// }

// global variable
#include<iostream>
using namespace std;
int i=8;
void a() {
    cout<<i<<endl;
    i++;
}
void b() {
    cout<<i<<endl;

}
int main() {
    int i=5;
    cout<<i<<endl;
    a();
    b();
}

// applicable only for one line in function 
// work just like macro
// #include<iostream>
// using namespace std;

// inline int max(int& a, int& b) {
//     return (a>b)?a:b;
// }
// int main() {
//     int a=1;
//     int b=5;
//     int ans=max(a,b);
//     cout<<ans;
//     a=a+6;
//     b=b+1;
//     ans=max(a,b); 
//     cout<<ans;
// }

// default parameter
// #include<iostream>
// using namespace std;

// void sum(int arr[],int n,int start=0){
//     for(int i=start;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }
// int main() {
//     int arr[5]={1,2,3,4,5};
//     sum(arr,5);


// }
