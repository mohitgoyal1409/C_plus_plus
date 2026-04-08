// #include<iostream>
// using namespace std;

// int even(int arr[],int size,int key) {
//     int start=0;
//     int end=size-1;
//     int mid=(start+end)/2;
//     while(start<=end) {
//         if(arr[mid]==key) {
//             return mid;
//         }
//         if(key>arr[mid]) {
//             start=mid+1;
//         }
//         else end=mid-1;

//         mid=(start+end)/2;
//     }
// return -1;
// }
// int main() {
//     int arr[8]={3,5,5,7,7,21,43,56};
//     int evensearch=even(arr,8,7);
//     cout<<evensearch;
// }


// find the last and first occuarnce 

// #include<iostream>
// using namespace std;

// int even(int arr[],int size,int key) {
//     int start=0;
//     int end=size-1,ans=-1;
//     int mid=start+(end-start)/2;
//     while(start<=end) {
//         if(arr[mid]==key) {
//             ans=mid;
//             end=mid-1; 
//         }
//         else if(key>arr[mid]) {
//             start=mid+1;
//         }
//         else end=mid-1;

//         mid=start+(end-start)/2;
//     }
// return ans;
// }
// int lasteven(int arr[],int size,int key) {
//     int start=0;
//     int end=size-1,ans=-1;
//     int mid=start+(end-start)/2;
//     while(start<=end) {
//         if(arr[mid]==key) {
//             ans=mid;
//             start=mid+1; 
//         }
//        else if(key>arr[mid]) {
//             start=mid+1;
//         }
//         else end=mid-1;

//         mid=start+(end-start)/2;
//     }
// return ans;
// }
// int main() {
//     int arr[8]={3,5,5,7,7,7,7,56};
//     int evensearch=even(arr,8,7);
//     int lastevensearch=lasteven(arr,8,7);
//     cout<<evensearch;
//      cout<<lastevensearch;
    
// }

// find the total no of occurance 
// #include<iostream>
// using namespace std;

// int even(int arr[],int size,int key) {
//     int start=0;
//     int end=size-1,ans=-1;
//     int mid=start+(end-start)/2;
//     while(start<=end) {
//         if(arr[mid]==key) {
//             ans=mid;
//             end=mid-1; 
//         }
//         else if(key>arr[mid]) {
//             start=mid+1;
//         }
//         else end=mid-1;

//         mid=start+(end-start)/2;
//     }
// return ans;
// }
// int lasteven(int arr[],int size,int key) {
//     int start=0;
//     int end=size-1,ans=-1;
//     int mid=start+(end-start)/2;
//     while(start<=end) {
//         if(arr[mid]==key) {
//             ans=mid;
//             start=mid+1; 
//         }
//        else if(key>arr[mid]) {
//             start=mid+1;
//         }
//         else end=mid-1;

//         mid=start+(end-start)/2;
//     }
// return ans;
// }
// int main() {
//     int arr[8]={3,5,5,7,7,7,7,56};
//     int evensearch=even(arr,8,7);
//     int lastevensearch=lasteven(arr,8,7);
//     cout<<evensearch;
//      cout<<lastevensearch;
//     cout<<lastevensearch-evensearch+1;
// }

//  find peak in moutain
// #include<iostream>
// using namespace std;
// int lasteven(int arr[],int size) {
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     while(start<end) {
//         if(arr[mid]<arr[mid+1]) {
//             start=mid+1; 
//         }
//         else { end=mid;
//         }
//         mid=start+(end-start)/2;
//     }
// return start;
// }
// int main() {
//     int arr[4]={3,4,5,1};
    
//     int lastevensearch=lasteven(arr,4);
//      cout<<lastevensearch;
// }
 
// find the pivot in array 
// #include<iostream>
// using namespace std;
// int lasteven(int arr[],int size) {
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     while(start<end) {
//         if(arr[mid]>=arr[0]) {
//             start=mid+1; 
//         }
//         else { 
//             end=mid;
//         }
//         mid=start+(end-start)/2;
//     }
// return start;
// }
// int main() {
//     int arr[5]={3,4,5,1,2};
    
//     int lastevensearch=lasteven(arr,5);
//      cout<<"index of peak is" <<lastevensearch;
// }

// find the key in sorted and rotated array
// #include<iostream>
// using namespace std;
// int pivot(int arr[],int size) {
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     while(start<end) {
//         if(arr[mid]>=arr[0]) {
//             start=mid+1; 
//         }
//         else { 
//             end=mid;
//         }
//         mid=start+(end-start)/2;
//     }
// return start;
// }

// int even(int arr[],int s,int e,int key) {
//     int start=s;
//     int end=e;
//     int mid=(start+end)/2;
//     while(start<=end) {
//         if(arr[mid]==key) {
//             return mid;
//         }
//         if(key>arr[mid]) {
//             start=mid+1;
//         }
//         else end=mid-1;

//         mid=(start+end)/2;
//     }
// return -1;
// }
 

// int main() {
//     int arr[5]={3,4,5,1,2};
//     int n=5;
//     int pivots=pivot(arr,n);
    
//     int k;
//     cin>>k;
//     if(k>=arr[pivots] && k<=arr[n-1]) {
//         cout<<even(arr,pivots,n-1,k);

//     }
//     else 
//     cout<<"the index of key that is search in this array"<<even(arr,0,pivots-1,k);    
// }

// find the square root of number
#include<iostream>
using namespace std;

int squareroot(int n) {
    int s=0;
    int e=n;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e) {
        int square=mid*mid;
        if(square==n) return mid;
        if(square<n) {
            ans=mid;
            s=mid+1;
        } 
        else e=mid-1;

        mid=(s+e)/2;
    
    }
    return ans;
}

double moreprecision(int n,int precision,int tempsol) {
    double factor= 1;
    double ans = tempsol;
    for(int i=0;i<precision;i++) {
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor) {
            ans=j;
        }
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    int s=squareroot(n);
    cout<<s<<" ";
    double d=moreprecision(n,3,s);
    cout<<d;
}
