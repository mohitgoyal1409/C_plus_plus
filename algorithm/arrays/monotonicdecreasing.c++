#include<iostream>
#include <vector>
using namespace std;
#include <stack>

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

   cout<<"next greatest eleemnt"<<endl;
   stack<int> s;
   vector<int> ans(n, -1);
   for (int i = 0; i < n; i++) {
       while(!s.empty() && arr[s.top()] < arr[i]) {
           ans[s.top()] = arr[i];
           s.pop();
        }
        s.push(i);
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    
    cout<<"next smaller eleemnt"<<endl;
    vector<int> ans2(n, -1);
    for (int i = 0; i < n; i++) {
        while(!s.empty() && arr[s.top()] > arr[i]) {
            ans2[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }
    for (int i = 0; i < n; i++) {
        cout << ans2[i] << " ";
    }
    return 0;
}
