#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main() {
   
    string s = "banana";

    vector<int> buildSuffixArray(string s);

    int n = s.size();

    vector<pair<string,int>> suffixes;

    for(int i=0;i<n;i++) {
        suffixes.push_back({s.substr(i),i});
    }

    sort(suffixes.begin(), suffixes.end());

    vector<int> sa;

    for(auto x:suffixes)
        sa.push_back(x.second);
    
    for(int i=0;i<sa.size();i++) {
        cout<<sa[i]<<" ";
    }
    
    return 0;
}