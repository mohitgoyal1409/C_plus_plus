// #include<iostream>
// using namespace std;
// int main() {
//     int num=5;
//     int *ptr=&num;
//     cout<<ptr<<endl;
//     cout<<"address of size of "<<sizeof(ptr);
//     cout<<"address of size of "<<sizeof(*ptr);
//     int *q=&num;
//     cout<<*q<<endl;

//  int num = 6;
//  int a = num;
//  a++;
// int *p = &num;
// int b = *p;
// b++;
//  cout<<num<<endl;  // 6 output
// }


// #include<iostream>
// using namespace std;
// int main() {
//     int num=5;
//     int *p=&num;
//     int *a=p;

//     cout<<a<<endl;
//     *p=(*p)*2;
//     cout<<p<<endl;
//     cout<<num<<endl;
//     p=p+1;
//     cout<<p<<endl;

// char s[]= "hello";
// char *p = s;
// cout << s[0] << " " << p[0];
// char *ptr;
//   char Str[] = "abcdefg";
//   ptr = Str;
//   ptr += 5;
//   cout << ptr;
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//   int arr[10]={2,4,4,5,6,7,8,9,10,1};
//   cout<<"address of first location "<<arr<<endl;
//   cout<<"address of first location "<<&arr<<endl;
//   cout<<"address of first location "<<&arr[0]<<endl;
//   cout<<"value at first location "<<*arr<<endl;
//   cout<<" add 1 in first number "<<(*arr+1)<<endl;
//   cout<<" add 1 in first number "<<(*arr)+1<<endl;
//   cout<<" second number "<<*(arr+1)<<endl;
//   int i=3;
//   cout<<"second number "<< i[arr]<<endl;
//  int *p=&arr[0];
//  cout<<sizeof(*p)<<endl;
//  cout<<sizeof(p)<<endl;
//  cout<<sizeof(arr)<<endl;
//  cout<<sizeof(*arr)<<endl;
//  cout<<sizeof(&arr)<<endl;

// p=p+1;
// cout<<p<<endl;

// // arr = arr+1 give error
// }

// int main() {
//     int  arr[5];
//     char ch[6] = "abcde";
//     cout<<arr<<endl;
//     cout<<ch<<endl;

// //     char *c = &ch[0];
// //     cout<<c<<endl;
// //     cout<<*c<<endl;

//     char temp = 'z';
//     char *p = &temp;
// //     cout<<*p<<endl;
//     cout<<p<<endl;

// }

// #include<iostream>
// using namespace std;

// void update(int *p) {
//       p =  p+1;
//       cout<<p<<endl;
// }

// int main() {
//       int value  = 5;
//       int *p = &value;

//       cout<<p<<endl;
//       update(p);
//       cout<<p<<endl;
// }

// #include<iostream>
// using namespace std;

// void print(int *arr) {
//       cout<<sizeof(arr)<<endl;

//       for(int i=0;i<5;i++) {
//             cout<<arr[i]<<" ";
//       }
// }
// int main() {
//       int arr[5]= {1,2,3,4,5};
//       print(arr);

// }

#include<iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;
    int ***ptr3= &ptr2;
    int ****ptr4 = &ptr3;
    cout<<**ptr3<<endl;
    
}