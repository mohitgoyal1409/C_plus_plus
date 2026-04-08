// #include<iostream>
// using namespace std;
// int main() {
//     int i=5;
//     int* p=&i;
//     int** p2=&p;

//     cout<<i<<endl;
//     cout<<*p<<endl;
//     cout<<**p2<<endl;
//     cout<<&i<<endl;
//     cout<<p<<endl;
//     cout<<*p2<<endl;
//     cout<<p2<<endl;
//     cout<<&p<<endl;
//     cout<<&p2<<endl;


// }
#include<iostream>
using namespace std;

void update(int** p2) {
    // p2=p2+1;
    //  KUCH CHANGE HUA - NO
    // *p2=*p2+1;
    //  KUCH CHANGE HUA - YES P VALUE CHANGE
    **p2=**p2+1;
    //  KUCH CHANGE HUA - YES I VALUE CHANGE 
}

int main() {
    // int i=5;
    // int* p=&i;
    // int** p2=&p;
    
    // cout<<i<<endl;
    // cout<<p<<endl;  
    // cout<<p2<<endl;
    // update(p2);
    // cout<<i<<endl;
    // cout<<p<<endl;  
    // cout<<p2<<endl;
  
    int arr[3]={11 , 21 ,31} ;
    int *p = arr;
    cout<<p[2]<<endl;

}