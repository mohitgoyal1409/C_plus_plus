#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main() {

    int n;
    cin>>n;
    vector<int>nums;
    for(int i =0;i<n;i++) {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    
    int maxVal = *max_element(nums.begin(), nums.end());

    int bucketSize = 10;

    int bucketCount = maxVal / bucketSize + 1;

    vector<vector<int>> buckets(bucketCount);

    for(int num : nums) {

        int idx = num / bucketSize;

        buckets[idx].push_back(num);
    }

    nums.clear();

    for(auto bucket : buckets) {

        sort(bucket.begin(), bucket.end());

        for(int num : bucket)
            nums.push_back(num);
    }

    for(int num : nums) {
        cout<<num<<" ";
    }
}