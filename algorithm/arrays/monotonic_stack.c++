#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    stack<int>s;
    vector<int>ans(n,-1);
    for (int i = n-1; i >= 0; i--) {

        while (!s.empty() && s.top() <= arr[i])
            s.pop();

        if (!s.empty())
            ans[i] = s.top();

        s.push(arr[i]);
    }
    
    for(int i = 0;i<n;i++) {
        cout<<ans[i]<<" ";
    }
}