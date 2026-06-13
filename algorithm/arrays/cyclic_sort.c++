#include<iostream>
#include <vector>
using namespace std;    

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int i = 0;

    while (i < n) {
        int correct = nums[i]-1;

        if (nums[i] != nums[correct]) {
            swap(nums[i], nums[correct]);
        } else {
            i++;
        }
    }
    for (int i = 0; i < n; i++) {
            cout << nums[i]<<" ";
    }
}