#include <iostream>
#include <vector>
using namespace std;

void boyerMoore(string text, string pattern) {

    int n = text.size();
    int m = pattern.size();

    // Last occurrence table
    vector<int> last(256, -1);

    for(int i = 0; i < m; i++) {
        last[pattern[i]] = i;
    }

    int shift = 0;

    while(shift <= n - m) {

        int j = m - 1;

        // Compare from right to left
        while(j >= 0 && pattern[j] == text[shift + j]) {
            j--;
        }

        // Pattern found
        if(j < 0) {
            cout << "Pattern found at index " << shift;
            return;
        }

        // Shift pattern
        shift += max(1, j - last[text[shift + j]]);
    }

    cout << "Pattern not found";
}

int main() {

    string text = "ABAAABCD";
    string pattern = "ABC";

    boyerMoore(text, pattern);

    return 0;
}