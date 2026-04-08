// #include<iostream>
// using namespace std;
// int main() {
//     int num[15]={2,7};
//     for(int  i=0;i<15;i++) {
//         cout<<num[i]<<" ";
//     }
//     int nums[15]={1};
//     for(int  i=0;i<15;i++) {
//         cout<<nums[i]<<" ";r
//     }
//     int num2[15]={0};
//     for(int  i=0;i<15;i++) {
//         cout<<num2[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// void printarray(int arr[],int size) {
//     for(int i=0;i<size;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// }
// int main() {
//     int num[15]={2,7};
//     printarray(num,15);
//     int nums[15]={1};
//     printarray(nums,15);
//     int num2[15]={0};
//     printarray(num2,15);
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int arr1[7],arr[7]={2,7,3,4,5,2,1};
//     int n=7;
//     for(int i=0;i<n;i++) {
//         arr1[i]=arr[n-i-1];
//     }
//     for(int i=0;i<n;i++) {
//         cout<<arr1[i]<<" ";
//     }
      

// }

#include<iostream>
// using namespace std;
// int main() {
//     int arr1[7],arr[7]={2,7,3,4,5,2,1};
//     // important concept
//     int *ptr=arr;
//     ptr++;
//     cout<<ptr[3]<<" ";

//     int n=7,sum=0;
//     for(int i=0;i<n;i++) {
//         sum=sum+arr[i];
//     }
//     cout<<sum;

// }

// 
using namespace std;

void sortArray(int *arr, int n) {

//base case - already sorted
if(n == 0 || n == 1) {
return ;
}
//1 case sovle karlia - largest element ko end ne rakh dega
for(int i=0; i<n-1; i++) {
if(arr[i] > arr[i+1]){
swap(arr[i], arr[i+1]);
}
}
sortArray(arr, n-1);
}
int main() {

int arr[5] ={2,5,1,6,9};

sortArray(arr,5);
for(int i=0; i<5; i++) {
   cout<<arr[i]<<" ";
}
}