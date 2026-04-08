// #include<iostream>
// using namespace std;
// int main() {
//     int arr[5]={5,4,3,2,1};
//     int n=5;
//     for(int i=0;i<n-1;i++) {
//         int minindex=i;
//         for(int j=i+1;j<n;j++) {
//             if(arr[j]<arr[minindex]) 
//             minindex=j;
//         }
//         swap(arr[minindex],arr[i]); 
//     }
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
void selectionsort(int arr[],int s,int e) {
    if(s>e) return;
    int minindex=s;
        for(int j=s+1;j<e;j++) {
            if(arr[j]<arr[minindex]) 
            minindex=j;
        }
        swap(arr[minindex],arr[s]);
        selectionsort(arr,s+1,e);
}
int main() {
    int arr[5]={5,2,3,4,1};
    int n=5;
    selectionsort(arr,0,n);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
