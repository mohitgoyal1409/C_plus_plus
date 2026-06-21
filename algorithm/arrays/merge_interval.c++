#include<iostream>
#include <vector>
using namespace std;
#include <algorithm>

int main() {
    int n;
    cin >> n;
    vector<vector<int>> intervals;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        intervals.push_back({x, y});
    }

    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;
    merged.push_back(intervals[0]);
    for (int i = 1; i < n; i++) {
        if (merged.back()[1] >= intervals[i][0]) {
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        } else {
            merged.push_back(intervals[i]);
        }
    }

    for (auto x : merged) {
        cout << x[0] << " " << x[1] << endl;
    }
    
    return 0;
}