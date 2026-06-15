#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n = 5;

    vector<int> diff(n,0);

    int l = 1;
    int r = 3;
    int val = 5;

    // Apply update
    diff[l] += val;

    if(r + 1 < n)
        diff[r + 1] -= val;

    // Recover final array
    vector<int> arr(n);

    arr[0] = diff[0];

    for(int i = 1; i < n; i++) {
        arr[i] = arr[i-1] + diff[i];
    }

    // Print answer
    for(int x : arr)
        cout << x << " ";

    return 0;
}