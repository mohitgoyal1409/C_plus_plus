#include<iostream>
using namespace std;
int main() {
    int arr[7]={2,1,5,4,3,7,6};
    int n=7;
    for(int i=1;i<n;i++) {
        bool swaped=false;
        for(int j=0;j<n-i;j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j+1],arr[j]);
                swaped=true;
            }
        }
        if(swaped==false) break;
    }
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
return 0;
}

// #include<iostream>
// using namespace std;
// void bubblesort(int arr[],int n) {
//     if(n==0 || n==1) return;
//     for(int i=0;i<n-1;i++) {
//             if(arr[i]>arr[i+1]) {
//                 swap(arr[i+1],arr[i]);
//             }
//         }
//         bubblesort(arr,n-1);
//     }
// int main() {
//     int arr[7]={2,1,5,4,3,7,6};
//     int n=7;
//     bubblesort(arr,n);
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }

