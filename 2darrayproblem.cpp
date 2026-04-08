
// wave print array
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     for(int j=0;j<3;j++) {
//         if(j&1) {
//             for(int i=2;i>=0;i--) {
//                 cout<<arr[i][j];
//             }
//         }
//         else 
//            for(int i=0;i<3;i++) {
//             cout<<arr[i][j];
//            }
//     }
    
// }

// spiral print
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     int sr=0;
//     int sc=0;
//     int er=3-1;
//     int ec=3-1;
//     int count=0;
//     int total=9;
//     while(count<=9) {
//     for(int i=sc;count<total&&i<=er;i++) {
//         cout<<arr[sr][i];
//         count++;
//     }
//     sr++;
//     for(int i=sr;count<total&&i<=ec;i++) {
//          cout<<arr[i][ec];
//          count++;
//     }
//     ec--;
//     for(int i=ec;count<total&&i>=sc;i--) {
//         cout<<arr[er][i];
//         count++;
//     }
//     er--;
//     for(int i=er;count<total&&i>=sr;i--) {
//         cout<<arr[i][sc];
//         count++;
//     }
//     sc++;
// }
// }

#include<iostream>
using namespace std;
int main() {
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int start=0;
    int end=11;
    int col=3;
    cout<<sizeof(arr);
    int mid=start+(end-start)/2;
    int target;
//     cin>>target;
//     while(start<=end) {
//         int element=arr[mid/col][mid%col];
//         if(element==target) {
//             cout<<"found";
//         }
//         if(element<target) {
//             start=mid+1;
//         }
//         else {
//           end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }
// return 0;
}