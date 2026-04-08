// #include<iostream>
// using namespace std;
// #include<stack>
// int main() {
//     stack<string>s;
//     s.push("mohit");
//     s.push("goyal");
//     s.push("bhumi");
//     cout<<"find top element "<<s.top()<<endl;
//     s.pop();
//     cout<<"find top element"<<s.top();
//     cout<<"size "<<s.size();
//     cout<<"empty "<<s.empty();
// }

// #include<iostream>
// using namespace std;
// #include<stack>

// class Stack {
//     public:
//     int top;
//     int *arr;
//     int size;

//     Stack(int size) {
//         this->size=size;
//         arr=new int[size];
//         top=-1;
//     }

//     void push(int elemnt) {
//         if((size-top)>1) {
//             top++;
//             arr[top]=elemnt;
//         }
//         else {
//             cout<<"stack overflow";
//         }
//     }
//     void pop() {
//         if(top>=0) {
//             top--;
//         }
//         else {
//             cout<<"stack underflow";
//         }
//     }
//     int peek() {
//         if(top>=0) {
//            return arr[top];
//         }
//         else {
//             cout<<"stack is empty";
//             return -1;
//         }
//     }
//     bool ischeck() {
//         if(top==-1) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }

// };

// int main() {
//     Stack st(5);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     st.push(44);
//   
//     st.pop();
//   
//     st.pop();
//   
//     st.pop();
//   
//     st.pop();
//   
//     st.pop();
//   
//     if(st.ischeck()) {
//         cout<<"stack is empty"<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// #include<stack>

// class twoStack {
//     public:
//     int top1;
//     int top2;
//     int *arr;
//     int size;

//     twoStack(int s) {
//         this->size=s;
//         arr=new int[size];
//         top1=-1;
//         top2=s;
//     }

//     void push1(int elemnt) {
//         if((top2-top1)>1) {
//             top1++;
//             arr[top1]=elemnt;
//         }
//         else {
//             cout<<"stack overflow";
//         }
    
//     }


//     void push2(int elemnt) {
//         if((top2-top1)>1) {
//             top2--;
//             arr[top2]=elemnt;
//         }
//         else {
//             cout<<"stack overflow";
//         }
//     }
//      int pop1() {
//         if(top1>=0) {
//             int ans = arr[top1];
//             top1--;
//             return ans;
//         }
//         else {
//             return -1;
//         }
//     }
//     int pop2() {
//         if(top2<size) {
//             int ans = arr[top2];
//             top2++;
//             return ans;
//         }
//         else {
//             return -1;
//         }
//     }
   
   

// };

// int main() {
//     twoStack st(8);
//     st.push1(2);
//     st.push1(3);
//     st.push1(4);
//     st.push1(5);
//     st.push1(44);
//     st.push1(44);
       
//     st.push2(54);
//     st.push2(64);
//     st.push2(74);
     
//     cout<<st.pop1()<<endl;
//     cout<<st.pop1()<<endl;
//     cout<<st.pop1()<<endl;
//     cout<<st.pop1()<<endl;
//     cout<<st.pop1()<<endl;
//     cout<<st.pop2()<<endl;
//     cout<<st.pop2()<<endl;
//     cout<<st.pop2()<<endl;
     
// }

// reverse the string
#include<iostream>
#include<stack>
using namespace std;
#include<string>

int main() {
    stack<char>s;
    string str="babbar";
    
    for(int i=0; i<str.length();i++) {
        char ch=str[i];
        s.push(ch);
    }
    string ans="";
    while(!s.empty()) {
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    } 
    cout<<"answer is "<<ans;
}


