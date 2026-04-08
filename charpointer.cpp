// #include<iostream>
// using namespace std;
// int main() {
//     char c[6]="abcde";
//     cout<<c<<endl;
//     char *p=&c[0];
//     cout<<p<<endl;
//     char ch = 'a';
//     char *q=&ch;
//     cout<<q<<endl;
//     cout<<&q<<endl;
//     cout<<&c<<endl;
// }

// // pointer in function
// #include<iostream>
// using namespace std;
// // p indise function is different than main function 
// void update(int *p) {
//       p=p+1;
//       cout<<p<<endl;
// }

// int main() {
//     int a=5;
//     int*p=&a;
//     cout<<"before address "<<p<<endl;
//     update(p);
//     cout<<"after address "<<p<<endl;
// }

// pointer in funtion  array
#include<iostream>
using namespace std;
//  int arr[]=int *arr is same in  function declaration
int sum(int arr[],int n) {  
    int sum=0;
    cout<<sizeof(arr)<<endl;
    for(int i=0;i<n;i++) {
        sum=sum+arr[i];

    }
    return sum;
}

int main() {
    int arr[5]={1,2,3,4,5};
    cout<<"sum is "<<sum(arr,5); 

}