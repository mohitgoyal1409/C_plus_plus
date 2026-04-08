// #include<iostream>
// using namespace std;
// int  length(char ch[]) {
//     int count=0;
//     for(int i=0;ch[i]!='\0';i++) {
//         count++;
//     }
//     return count;
// }
// void reverse(char ch[],int count) {
//     int i=0,j=count-1;
//     while(i<=j) {
//         int temp=ch[i];
//         ch[i]=ch[j];
//         ch[j]=temp;
//         i++;
//         j--;

//     }
//     for(int i=0;ch[i]!='\0';i++) {
//         cout<<ch[i]<<" ";
//     }
// }
// int main() {
//     char ch[20];
//     cin>>ch;
//     cout<<ch<<endl;
//     int l=length(ch);
//     reverse(ch,l);
// }

// check the palidrome
#include<iostream>
using namespace std;
char tolowercase(char ch) {
    if(ch>='a'&&ch<='z') {
        return ch;
    }
    else {char temp=ch-'A'+'a';
    return temp;
}
}
int  checkpalidrome(char ch[],int l) {
    int i=0;
    int j=l-1;
    while(i<=j) {
        if(tolowercase(ch[i])!=tolowercase(ch[j]) ) 
        {
         return 0;   
        }
        else { 
        i++; j--;
    }
}
    return 1;
}

 int  length(char ch[]) {
    int count=0;
    for(int i=0;ch[i]!='\0';i++) {
        count++;
    }
    return count;
}
void reverse(char ch[],int count) {
    int i=0,j=count-1;
    while(i<=j) {
        int temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
        i++;
        j--;

    }
    for(int i=0;ch[i]!='\0';i++) {
        cout<<ch[i]<<" ";
    }
}
int main() {
    char ch[20];
    cin>>ch;
    cout<<ch<<endl;
    int l=length(ch);
    reverse(ch,l);
    int c=checkpalidrome(ch,l);
    cout<<c;

}

// inbuilt function
// for length find strlen()
// for copy strcpy(s1,s2)
// for compare strcmp(s1,s2)

// #include<iostream>
// using namespace std;

// char getmaximumocc(string s) {
//     int arr[26]={0};
//     for(int i=0;i<s.length();i++) {
//         char ch=s[i];
//         int number = 0;
//         if(ch>='a' && ch<='z') {
//             number = ch-'a';
//         }
//         else {
//           number = ch-'A';
//         }
//     arr[number]++; 
//     }
//     int mini=-1,ans=0;
//     for(int i=0;i<26;i++) {
//         if(mini<arr[i]) {
//             ans = i;
//             mini=arr[i];
//         }
//     }
//     char final='a'+ans;
//     return final;
// }

// int main() {
//     string s="testsample";
//     // cin>>s;
//     cout<<getmaximumocc(s);
// }