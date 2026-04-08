// #include<iostream>
// using namespace std;
// // pass by refernce
// void update(int& n) {
//     n++;
// }
// int main() {
//     int i=5;
//     cout<<i;
//     update(i);
//     cout<<i;
// } 


// very bad give error
// #include<iostream>
// using namespace std;

// int& update(int n) {
//     int& ans=n;
//     return ans;
// }
// int main() {
//     int i=5;
//     cout<<i;
//     update(i);
//     cout<<i;
// } 

//dynamic memory allocation by use of heap memory
#include<iostream>
using namespace std;

void sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++) {
        sum=sum+arr[i];
    }
    cout<<sum;
}
int main() {
    
    // char ch = 'q';
    // char *c = &ch;
    // cout<<sizeof(c)<<endl;
    
    int n;
    cin>>n;

    int* arr=new int[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    sum(arr,n);
} 