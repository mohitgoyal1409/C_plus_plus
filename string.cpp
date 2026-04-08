// #include <iostream>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     cout << s;
//     int l = s.length();
//     cout << l;
//     s.push_back('c');
//     cout << s;
//     s.pop_back();
//     cout << s;
// }

// #include <iostream>
// using namespace std;
// void getMax0ccCharacter(string s)
// {
//     int arr[26] = {0};
//      int size = s.length();
//     // create an array of count of characters
//     for (int i = 0; i < size; i++)
//     {
//         char ch = s[i];
//         // lowercase
//         int number = 0;
//         number = ch - 'a';
//         arr[number]++;
//     }

//     int maxi = -1, ans = 0;
//     for (int i = 0; i < 26; i++)
//     {
//         if (maxi < arr[i])
//         {
//             ans = i;
//             maxi = arr[i];
//         }
//     }
//     char finalAns = 'a' + ans;
//     cout<<finalAns;
// }


// int main() {
//     string s;
//     cin>>s;
//     getMax0ccCharacter(s);
// }
// replace space in string with @40
#include<iostream>
using namespace std;
int main() {
    string s="mohit is handsome boy";
    int size = s.length();
    for(int i=0;i<size;i++) {
        if(s[i]==' ') {
            s.push_back('@');
            s.push_back('4');
            s.push_back('0');
        }
        else s.push_back(s[i]);
    }
    cout<<s;
}

// #include<iostream>
// using namespace std;
// int main() {
//     string s="mohit is handsome boy";
//     // string s="";
//     int count=0;
//     for(int i=0;i<s.length();i++) {
//         if(s[i]==' ') {
//             cout<<i;
//         }
//         // else s.push_back(s[count+i]);
//         // int count=0;
//     }
//     cout<<s;
// }

// remove all occurance of substring
// Input: s = "axxxxyyyyb", part = "xy"
// Output: "ab"
// Explanation: The following operations are done:
// - s = "axxxxyyyyb", remove "xy" starting at index 4 so s = "axxxyyyb".
// - s = "axxxyyyb", remove "xy" starting at index 3 so s = "axxyyb".
// - s = "axxyyb", remove "xy" starting at index 2 so s = "axyb".
// - s = "axyb", remove "xy" starting at index 1 so s = "ab".
// Now s has no occurrences of "xy".

// #include<iostream>
// using namespace std;
// int main() {
//     string s;
//     cin>>s;
//     string part;
//     cin>>part;

//     while(s.length()!=0 && s.find(part)<s.length()) {
//         s.erase(s.find(part),part.length());
//     }
//     cout<<s;
// }