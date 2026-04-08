// question 1 - swap alternate in array 

// // #include<iostream>
// using namespace std;
// int main() {
//     int arr[8]={2,7,3,10,2,1,9,6};
//     int n=8;
//     int i=0,j=1;
//     while(j<n && i<n-1) {
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
        
//         // swap(arr[i],arr[j]);
//         i=i+2;
//         j=j+2;
// }
// for(int i=0;i<n;i++) {
//     cout<<arr[i]<<" ";
// }
// return 0;
// }

// question 2 find unique element

// #include<iostream>
// using namespace std;
// int main() {
//     int arr[5]={1,3,2,1,3};
//     int ans =0;
//     for(int i=0;i<5;i++) {
//         ans=ans^arr[i];
//     }
//     cout<<ans;
// return 0;
// }

// question 3-find duplication
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[5]={2,3,4};
//     int arr[5]={1,2,2,3};
//     int n=5,ans=0;
//     for(int i=0;i<n;i++) {

//     ans=ans^arr[i];
// }
//     for(int i=1;i<n;i++) {
//         ans=ans^i;
//     }
//     cout<<ans;
// return 0;
// } 

// #include<iostream>
// using namespace std;
// int main() {
//     int arr[5]={2,3,3,1,4};
//     for(int i=0;i<5;i++) {
//        for(int j=i+1;j<5;j++) {
//         if(arr[i]==arr[j]) 
//         cout<<arr[i];
//     } 
// }
// return 0;
// }

// question 4 intersection from two array

// #include<iostream>
// using namespace std;
// int main() {
//     int arr1[5]={2,3,3,1,4};
//     int arr2[5]={1,2,3};
//     int i=0,j=0;
//     vector <int> ans;
// 	while(i<5 && j<5) {
// 		if(arr1[i]<arr2[j]) {
// 			i++;
// 		}
// 		else if(arr1[i]==arr2[j]) {
// 			ans.push_back(arr1[i]);
// 			i++;
// 			j++;
// 		}
// 		else j++;
// 	}
// return 0;
// }

// find pair 
// #include <iostream>
// using namespace std;
// int main() {
//     int s;
//     cin>>s;
//     int arr[8]={1,2,3,4,5,6,7};
//     for(int i=0;i<8;i++) {
//         for(int j=i+1;j<8;j++) {
//             for(int k=i+2;k<8;k++) {
//             if(s==arr[i]+arr[j]+arr[k]) {
//                 cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
//             }
//         }
//     }
// }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int arr1[6]={0};
//     int arr[6]={1,2,2,1,1,3};
//     for(int i=0;i<5;i++) {
//         for(int j=i+1;j<6;j++) {
//             if(arr[i]==arr[j]) {
//                 arr1[arr[i]]++;
//             }
//         }
//     }
//     for(int i=0;i<6;i++) {
//         cout<<arr1[i]<<" ";
//     }
//     return 0;
// }

// find all unique occurance of elemnt
// #include<vector>
// #include <iostream>
// #include<algorithm>
// using namespace std;
// int main() {
//         vector<int>arr;
//         arr.push_back(1);
//         arr.push_back(2);
//         arr.push_back(2);
//         arr.push_back(1);
//         arr.push_back(1);
//         arr.push_back(3);
//         vector<int>ans;
//         sort(arr.begin(),arr.end());
//         int count =0;
        // int x=arr[0];
        // for(int i=0;i<arr.size();i++) {
        //     if(x==arr[i]) {
        //         count++;
        //     }
        //     else {
        //         ans.push_back(count);
        //         x=arr[i];
        //         count=1;
        //     }
        // }
//         ans.push_back(count);
//         sort(ans.begin(),ans.end());
//         for(int i=0;i<ans.size();i++) {
//             cout<<ans[i]<<" ";
//         }
//         for(int i=0;i<ans.size()-1;i++) {
//             if(ans[i]==ans[i+1]) {
//                 return false;
//             }
//         }
//         return true;
//     }
// //     return 0;
// // }

#include<vector>
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    vector<int>arr;
        arr.push_back(1);
        arr.push_back(2);
        arr.push_back(2);
        arr.push_back(1);
        arr.push_back(4);
        arr.push_back(3);
        vector<int> ans;
    int j=arr.size()-1;
    for(int i=0;i<arr.size();i++) {
       if(arr[i]!=arr[j]) {
        i++;
       }
       if(arr[i]!=arr[j]) {
        j--;
       }
       else {
        ans.push_back(arr[i]);
    }
}
  for(int i=0;i<ans.size();i++) {
     cout<<ans[i]<<" ";
  }


}