// power by recursion
// #include<iostream>
// using namespace std;
// int power(int n,int x) {
//     if(n==0) return 1;
//     return x*power(n-1,x);
// }


// int main() {
//     int x;
//     int n;
//     cin>>x;
//     cin>>n;
//     int f=power(n,x);
//     cout<<f<<endl;

// }


// recursion use for factorial
// #include<iostream>
// using namespace std;
// int factorial(int n) {
//     if(n==0) return 1;
//     return n*factorial(n-1);
// }


// int main() {
//     int n;
//     cin>>n;
//     int f=factorial(n);
//     cout<<f<<endl;

// }

// print couting 
// #include<iostream>
// using namespace std;
// void counting(int n) {
//     if(n==0) return;
//     cout<<n<<endl;
//     counting(n-1);
// }


// int main() {
//     int n;
//     cin>>n;
//     counting(n);

// }

// counting of number 
// #include<iostream>
// using namespace std;
// void counting(int n) {
//     if(n==0) return;
//     counting(n-1);
//     cout<<n<<endl;
// }

// int main() {
//     int n;
//     cin>>n;
//     counting(n);   
// }

// fibonacci series
// #include<iostream>
// using namespace std;
// int fib(int n) {
//     if(n==1) 
//         return 0;
//     if(n==2)  
//         return 1;
//     return fib(n-1)+fib(n-2);
// }

// int main() {
//     int n;
//     cin>>n;
//     int f=fib(n);   
//     cout<<f<<endl;

// }

//  no of way for climb stairs
// #include<iostream>
// using namespace std;
// int climb(int n) {
//     if(n<0) return 0;
//     if(n==0) return 1;
//     return climb(n-1)+climb(n-2);
// }

// int main() {
//     int n;
//     cin>>n;
//     int f=climb(n);   
//     cout<<f<<endl;

// }

//  say digit eg input->412 output->four one two
// #include<iostream>
// using namespace std;
// void saydigit(int n,string ch[]) {
//     if(n==0) return;
//     int digit = n%10;
//     n=n/10;
//     saydigit(n,ch);
//     cout<<ch[digit]<<" ";
// }

// int main() {
//     string ch[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//     int n;
//     cin>>n;
//     saydigit(n,ch);
// }

// check the chay  is sorted or not 
// #include<iostream>
// using namespace std;
// bool issort(int arr[],int size) {
//     if(size==0 || size==1) return true;
//     if(arr[0]>arr[1])  return false;
//     else {
//         bool remaining = issort(arr+1,size-1);
//         return remaining;
//     }
// }
// int main() {
//     int arr[5]={1,2,3,3,9};
//     int  n=5;
//     bool i=issort(arr,n);
//     if(i) cout<<"array is sorted";
//     else cout<<"array is not sorted";
// }
// 

// sum using aaray
// #include<iostream>
// using namespace std;
// void print(int arr[],int size) {
//     cout<<size<<endl;
//     for(int i=0;i<size;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int sums(int arr[],int size ,int sum) {
//     print(arr,size);
//     if(size==0){
//      return sum;
//     }
//     else{
//     sum = sum+arr[0];
//     cout<<"sum"<<sum<<endl;
//     }
//     return sums(arr+1,size-1,sum);
// }

// int main() {
//     int arr[5]={1,2,3,4,5};
//     int  n=5;
//     int sum =0;
//     int s = sums(arr,n,sum);
//     cout<<s<<endl;
// }

// linear search by recursion 
// #include<iostream>
// using namespace std;
// bool linsearch(int ch[],int n,int key) {
//     if(n==0) 
//     return false;
//     if(ch[0]==key) return true;
//     else {
//         bool remaining = linsearch(ch+1,n-1,key);
//         return remaining;
//     }
// }
// int main() {
//     int ch[5]={1,2,5,3,9};
//     int  n=5;
//     int key = 9;
//     bool i=linsearch(ch,n,key);
//     if(i) cout<<"present";
//     else cout<<"absent";
// }

// binary search using recursion
// #include<iostream>
// using namespace std;
// bool sum(int ch[],int s,int e,int key) {
//     int mid=(s+e)/2;
//     if(s>e) return false;
//     if(ch[mid]==key) return true;
//     if(ch[mid]>key) {
//         bool k= sum(ch,s,mid-1,key);
//         return k;
//     }
//     else { bool k= sum(ch,mid+1,e,key);
//     return k;
// }
// }
// int main() {
//     int ch[5]={1,2,3,5,9};
//     int  s=0,e=5;
//     int key = 10;
//     bool i=sum(ch,s,e,key);
//     if(i) cout<<"present";
//     else cout<<"absent";
// }

// #include<iostream>
// using namespace std;
// bool sum(int ch[],int n,int sums) {
//     if(n==0) return 0;
//     else {
//         sums=sums+sum(ch+1,n-1,sums);
//         return sums;
//     }

    
// }
// int main() {
//     int ch[5]={1,2,3,5,9};
//     int n=5;
//     int sums=0;
//     int i=sum(ch,n,sums);
//     cout<<i;
// }

// reverse the string
#include<iostream>
using namespace std;
#include<string>
void reverse(string& ch,int i,int j) {
    if(i>j) return;
    swap(ch[i],ch[j]);
    i++;
    j--;
    reverse(ch,i,j);
} 

int main() {
   string ch="mohit";
   int i=0;
  reverse(ch,i,ch.length()-1);
   cout<<ch;
}
  
// check palindrome string
// #include<iostream>
// using namespace std;
// #include<string>
// bool palindrome(string& ch,int i,int j) {
//     if(i>j) return true;

//     if(ch[i]!=ch[j]){
//         return false;
//     }
//     else {
//     return palindrome(ch,i=i+1,j=j-1);
//     }
// } 

// int main() {
//    string ch="abbcbba";
//    bool i=palindrome(ch,0,ch.length()-1);
//     if(i) cout<<"string is palindrome";
//     else cout<<"string is not palindrome";
// }

// power by recursion
// #include<iostream>
// using namespace std;
// int power(int n,int b) {
//     if(b==0) return 1;
//     if(b==1) return n;
//     int ans=power(n,b/2);
//     if(b%2==0) {
//         return ans*ans;
//     }
//     else
//     return n*ans*ans;
// }
// int main() {
//     int b;
//     int a;
//     cin>>a;
//     cin>>b;
//     int f=power(a,b);
//     cout<<f<<endl;
// }
