#include<iostream>
using namespace std;

void reverse(char ch[],int n) {
    int s =0;
    int e = n-1;
    while(s<=e) {
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
    cout<<ch;
}

int length(char ch[]) {
    int count =0;
    for(int i=0;ch[i]!='\0';i++) {
        count++;
    }
    cout<<"length is "<<count<<endl;
    return count;
}
int main(){
    char ch[20];
    cin>>ch;
    // ch[2]='\0';
    cout<<ch<<endl;
    // cout<<length(ch);
    reverse(ch,length(ch));
}