#include<iostream>
using namespace std;
#include<vector>

int main() {
        string s = "abab";
        string p = "ab"; 
        int n = s.length(); 
        int m = p.length(); 
        vector<int> cnt1(26,0);
        vector<int> cnt2(26,0);
        vector<int> ans;
        
        for(int i =0;i<m;i++) {
              cnt1[p[i]-'a']++;   
              cnt2[s[i]-'a']++;   
        }

        if(cnt1 == cnt2) {
                ans.push_back(0);
        }

        for(int i = m;i<n;i++) {
            cnt2[s[i]-'a']++;
            cnt2[s[i-m]-'a']--;

            if(cnt1 == cnt2) {
                ans.push_back(i-m+1);
            }
        }

        for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
        }
        return 0;
}