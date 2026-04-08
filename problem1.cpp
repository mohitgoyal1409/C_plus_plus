//reverse the array

// #include <iostream>
// using namespace std;
// #include <vector>
// int main() {
//     vector <int>arr(5);
//     arr.push_back(1);
//     arr.push_back(2);
//     arr.push_back(3);
//     arr.push_back(4);
//     arr.push_back(5);
//     int n=5;
//     int i=0,j=n-1;
//     while(i<=j) {
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         i++;
//         j--;
//     }
//     for(int i=0;i<n;i++) {
//         cout<<arr[i];
//     }
// }

// //reverse the array by vector
// #include <iostream>
// using namespace std;
// #include <vector>

// vector<int>reverse(vector<int>v) {
//     int i=0;
//     int j = v.size()-1;
//     while (i<=j)
//     {
//         swap(v[i],v[j]);
//         i++;
//         j--;
//     }
//     return v;
// }
//     void print(vector<int> v)  {
//         for(int i=0;i<v.size();i++) {
//         cout<<v[i];
//     }
//     cout<<endl;
//     }
// int main() {
//     vector <int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     vector<int>ans=reverse(v);
//     print(ans);
     
// }

//reverse the array by vector at any index
// #include <iostream>
// using namespace std;
// #include <vector>

// vector<int>reverse(vector<int>v,int m) {
//     int i=m+1;
//     int j = v.size()-1;
//     while (i<=j)
//     {
//         swap(v[i],v[j]);
//         i++;
//         j--;
//     }
//     return v;
// }
//     void print(vector<int> v)  {
//         for(int i=0;i<v.size();i++) {
//         cout<<v[i];
//     }
//     cout<<endl;
//     }
// int main() {
//     vector <int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     int m;
//     cin>>m;
//     vector<int>ans=reverse(v,m);
//     print(ans);
     
// }


// merge the two array
// #include <iostream>
// using namespace std;

// void merge(int arr1[],int n,int arr2[],int m,int arr3[]) {
//     int i=0,j=0,k=0;
//     while(i<n&&j<m) {
//         if (arr1[i]<arr2[j])
//         {
//           arr3[k]=arr1[i];
//           i++;
//           k++;
//         }
//         else {
//             arr3[k]=arr2[j];
//             j++;
//             k++;
//         }
// }
//    while(i<n) {
//      arr3[k]=arr1[i];
//      i++;
//      k++;
//    }
//    while(j<m) {
//     arr3[k]=arr2[j];
//     j++;
//     k++;
//    }
// }
//   void print(int arr3[],int n) {
//     for(int i=0;i<n;i++) {
//         cout<<arr3[i];
//     }
//   }

//    int main() {
//     int arr1[5]={1,3,5,7,9};
//     int arr2[3]={2,4,6};
//     int arr3[8]={0};
//     merge(arr1,5,arr2,3,arr3);
//     print(arr3,8);
//    }

// move the zero in right side
// #include <iostream>
// using namespace std;
// int main() {
//     int arr1[7]={2,0,1,3,0,0,0};
//     int i=0;
//     for(int j=0;j<7;j++) {
//         if(arr1[j]!=0) {
//             swap(arr1[j],arr1[i]);
//             i++;
//         }
//     }
//     for(int i=0;i<7;i++) {
//         cout<<arr1[i]<<" ";
//     }
// }

// rotate the array by k 
// #include<iostream>
// using namespace std;
// #include<vector>
// int main() {
//     vector<int> v;
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(4);
// v.push_back(5);
// v.push_back(6);
// v.push_back(7); 
// v.push_back(8);
// int k;
// cin>>k;
// vector<int> temp(v.size());
// for(int i=0;i<v.size();i++) {
//      temp[(i+k)%v.size()]=v[i];
// }
// v=temp;
// for(int i=0;i<v.size();i++) {
//     cout<<v[i]<<" ";
// }
// }

// sum of two array
#include<iostream>
using namespace std;
#include<vector>
int main() {
    vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
    vector<int>v1; 
v1.push_back(1);
v1.push_back(2);
v1.push_back(3);
v1.push_back(8);
int i=v.size()-1;
int j=v1.size()-1;
int carry=0;
vector<int>ans;
while(i>=0&&j>=0) {
    int val1=v[i];
    int val2=v1[j];
    int sum=val1+val2+carry;
    carry=sum/10;
    sum=sum%10;
    ans.push_back(sum);
    i--;
    j--;
}
while(i>=0) {
    int sum=v[i]+carry;
    carry=sum/10;
    sum=sum%10;
    ans.push_back(sum);
    i--;


}
while(j>=0) {
    int sum=v1[j]+carry;
    carry=sum/10;
    sum=sum%10;
    ans.push_back(sum);
    j--;
    

}
while(carry!=0) {
    int sum=carry;
    carry=sum/10;
    sum=sum%10;
    ans.push_back(sum);
}
 
// s
for(int i=0;i<4;i++) {
    cout<<ans[i]<<" ";
}
}
