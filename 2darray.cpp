// #include<iostream>
// using namespace std;

// int main() {
//     int arr[3][4];

//     // row wise input
//     // for(int row =0;row<3;row++) {
//     //     for(int col = 0;col<4;col++) {
//     //         cin>>arr[row][col];
//     //     }
//     // }

//     // column wise input
//     for(int col =0;col<4;col++) {
//         for(int row = 0;row<3;row++) {
//             cin>>arr[row][col];
//         }
//     }
    
//     for(int row =0;row<3;row++) {
//         for(int col = 0;col<4;col++) {
//             cout<<arr[row][col];
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// bool ispresent(int arr[][3],int r,int c,int target) {
//     for(int i=0;i<r;i++) {
//         for(int j=0;j<c;j++) {
//             if(arr[i][j]==target) {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }
// void rowssum(int arr[][3],int r,int c) {
//     for(int i=0;i<r;i++) {
//         int sum =0;
//         for(int j=0;j<c;j++) {
//             sum=sum+arr[i][j];
//         }
//         cout<<sum<<endl;
//     }
// }
// void colsum(int arr[][3],int r,int c) {
//     for(int j=0;j<r;j++) {
//         int sum =0;
//         for(int i=0;i<c;i++) {
//             sum=sum+arr[i][j];
//         }
//         cout<<sum<<endl;
// }
// }
// int main() {
//     int arr[3][3];
//     for(int i=0;i<3;i++) {
//         for(int j=0;j<3;j++) {
//             cin>>arr[i][j];
//         }
//     }
//      for(int i=0;i<3;i++) {
//         for(int j=0;j<3;j++) {
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     int key;
//     cin>>key;
// cout<<"found element: "<<ispresent(arr,3,3,key)<<endl;
// rowssum(arr,3,3);
// colsum(arr,3,3);
// }

#include<iostream>
using namespace std;

void colsum(int arr[][3],int r,int c) {
    int max=0;
    for(int j=0;j<r;j++) {
        int sum =0;
        for(int i=0;i<c;i++) {
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    if(sum>max) {
        max=sum;
        }
        
    }
    cout<<"max is "<<max;
}
int main() {
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    colsum(arr,3,3);   
}

