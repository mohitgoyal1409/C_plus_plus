#include<iostream>
#include<vector>
using namespace std;

int main() {
     vector<int>arr;
     int n;
     cin>>n;
     for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int count = 0;
    int element = 0;

    for(int i = 0;i<n;i++) {
        if(count == 0) {
            element = arr[i];
        }
        if(arr[i]==element) {
            count++;
        }
        else {
            count--;
        }
    }
    cout<<element; 
}