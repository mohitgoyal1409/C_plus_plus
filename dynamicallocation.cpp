
//dynamic memory allocation by use of heap memory
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int* arr=new int[n];
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++) {
//         sum=sum+arr[i];
//     }
//     cout<<sum;
// } 

// // dynamic 2d array allocate 
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     // creation the array
//     int **arr= new int* [n];
//     for(int i=0;i<n;i++) {
//         arr[i]=new int[n];
//     }
//     // input the array
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++) {
//             cin>>arr[i][j];
//         }
//     }
//     // printing the array
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++) {
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
// }  


// dynamic 2d array allocate 
#include<iostream>
using namespace std;
int main() {
    int row;
    cin>>row;
    int col;
    cin>>col;
    // creation the array
    int **arr= new int* [row];
    for(int i=0;i<row;i++) {
        arr[i]=new int[col];
    }
    // input the array
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cin>>arr[i][j];
        }
    }
    // printing the array
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    // release the memmory
    for(int i=0;i<row;i++) {
       delete [] arr[i];
    }
    delete []arr;




}  