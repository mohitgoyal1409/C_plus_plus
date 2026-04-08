// #include<iostream>
// using namespace std;

// void merge(int arr[],int s,int e) {
//     int mid  = (s+e)/2;
//     int len1=mid-s+1;
//     int len2=e-mid;
//     int *frist=new int[len1];
//     int *second=new int[len2];
//     int mainindex=s;
//     for(int i=0;i<len1;i++) {
//         frist[i]=arr[mainindex++];
//     }
//     mainindex=mid+1;
//     for(int i=0;i<len2;i++) {
//         second[i]=arr[mainindex++];
//     }
//     int index1=0;
//     int index2=0;
//     mainindex=s;
//     while(index1<len1 && index2<len2) {
//         if(frist[index1]<second[index2])
//         arr[mainindex++]=frist[index1++];
//         else
//         arr[mainindex++]=second[index2++];
//     }
//     while(index1<len1) {
//         arr[mainindex++]=frist[index1++];
//     }
//     while (index2<len2) {
//         arr[mainindex++]=second[index2++];
//     }

// }

// void mergesort(int arr[],int s,int e) {
//     if(s>=e) return;
//     int mid=(s+e)/2;
//     mergesort(arr,s,mid);
//     mergesort(arr,mid+1,e);
//     merge(arr,s,e);
// }
// int main() {
//     int arr[15]={2,5,4,3,1,8,7,9,10,15,11,16,24,34,21};
//     int s=0,n=15;
//     mergesort(arr,s,n-1);
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }

#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[],int st,int mid , int end) {
    vector<int>temp;
    int i=st;
    int j = mid+1;

    while(i<=mid && j<=end) {
        if(arr[i]<=arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;

        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int i=0;i<temp.size();i++){
        arr[i+st]=temp[i];
    }

}

void mergesort(int arr[],int st,int end){
    if(st<end){
        int mid = st+(end-st)/2;
        mergesort(arr,st,mid);
        mergesort(arr,mid+1,end);
        merge(arr,st,mid,end);
    }
}

int main(){
    int arr[6]={12,2,54,45,65,41};
    mergesort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}