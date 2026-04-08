// #include<iostream>
// using namespace std;
// int main() {
//     int arr[5]={5,4,3,2,1};
//     int n=5;
//     for(int i=1;i<n;i++) {
    //     int temp=arr[i];
    //     int j=i-1;
    //     for(;j>=0;j--) {
    //         if(arr[j]>temp) {
    //             arr[j+1]=arr[j];
    //         }
    //         else {
    //             break;
    //         }
    //     }
    //     arr[j+1]=temp;
    // }
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }


#include<iostream>
using namespace std;

void insertionsort(int arr[],int s,int e) {
    if(s>e) return;

     int temp=arr[s];
        int j=s-1;
            while(j>=0) {
            if(arr[j]>temp) {
                arr[j+1]=arr[j];
            }
            else {
                break;
            }
            j--;
        }
        arr[j+1]=temp;
        insertionsort(arr,s+1,e);
}

int main() {
    int arr[5]={5,4,3,2,1};
    int n=5;
    insertionsort(arr,1,n-1);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}

