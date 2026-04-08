// #include<iostream>
// using namespace std;
// #include<deque>
// int main() {
//     deque<int>d;
//     d.push_back(1);
//     d.push_front(2);
//     for(int i=0;i<2;i++) {
//         cout<<d[i]<<" "<<endl;
//     }
//     cout<<"firsts index element is "<<d.at(1);
//     cout<<"front"<<d.front();
//     cout<<"back"<<d.back();
//     cout<<"size before erase"<<d.size();
//     d.erase(d.begin(),d.begin()+1);
//     cout<<"size after erase"<<d.size();
//     for(int i=0;i<d.size();i++) {
//         cout<<d[i]<<" "<<endl;
//     }
// }


#include<iostream>
using namespace std;
#include<deque>
int main() {
    deque<int>d;
    
    d.push_front(12);
     d.push_back(14);
     cout<<d.front()<<endl;
     cout<<d.back()<<endl;
     d.pop_front();
     cout<<d.back()<<endl;
     cout<<d.front()<<endl;
     
}