#include<iostream>
using namespace std;
#include<queue>
int main() {
    queue<string>q;
    q.push("mohit");
    q.push("goyal");
    q.push("bhumi");
    cout<<"front element"<<q.front()<<endl;
    q.pop();
    cout<<"front element"<<q.front()<<endl;
    cout<<"size"<<q.size()<<endl;
    cout<<"isempty"<<q.empty()<<endl;
    cout<<q.size()<<endl;

}

// #include<iostream>
// using namespace std;
// #include<queue>
// int main() {
//     // max heap
//     priority_queue<int> maxi;
//     priority_queue<int , vector<int>,greater<int> > mini;
//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(2);
//     maxi.push(0);
//     int n=maxi.size();
//     for(int i=0;i<n;i++) {
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }
//     mini.push(5);
//     mini.push(1);
//     mini.push(3);
//     mini.push(2);
//     mini.push(0);
//     int m=mini.size();
//     for(int i=0;i<m;i++) {
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }
    
// } 

// #include<iostream>
// using namespace std;
// #include<queue>
// int main() {
//     queue<int>q;
//     q.push(11);
//     q.push(12);
//     q.push(13);
//     q.push(14);
     
//     cout<<"front element"<<q.front()<<endl;
//     q.pop();
//     cout<<"front element"<<q.front()<<endl;
//     cout<<q.size()<<endl;

// }

// #include<iostream>
// using namespace std;
// #include<queue>
// int main() {
//     deque<int>d;
//     d.push_front(12);
//     d.push_back(15);
//     cout<<d.front()<<endl;
//     cout<<d.back()<<endl;
//     d.pop_front();
//     cout<<d.front()<<endl;
//     cout<<d.back()<<endl;
//     d.pop_back();
//     if(d.empty()) {
//         cout<<"empty";
//     }


// }

// #include<iostream>
// using namespace std;
// #include<queue>
// class kqueue {
//     public:
//     int n;
//     int k;
//     int *front;
//     int *rear;
//     int *arr;
//     int freespot;
//     int *next;
    
//     public:
//     kqueue(int n,int k) {
//         this->n=n;
//         this->k=k;
//         front = new int[k];
//         rear = new int[k];
//         for(int i=0;i<k;i++) {
//             front[i]=-1;
//             rear[i]=-1;
//         }
//         next = new int[n];
//         for(int i=0;i<n;i++) {
//             next[i]=i+1;
//         }
//         next[n-1]=-1;
        
        
//         arr = new int[n];
//         freespot=0;
//     }
//     void enqueue(int data , int qn) {
//         if(freespot==-1) {
//             cout<<"no empty xspace is present"; 
//              return; 
//         }

//         int index=freespot;
//         freespot=next[index];
//         if(front[qn-1]==-1) {
//             front[qn-1]=index;
//         }
//         else {
//             next[rear[qn-1]]=index;
//         }
//         next[index]=-1;
//         rear[qn-1]=index;
//         arr[index]=data;
//     }
//     int dequeue(int qn) {
//         if(front[qn-1]==-1) {
//             cout<<"queue underflow"<<endl;
//             return -1;
//         }
//         int index=front[qn-1];
//         front[qn-1]=next[index];
//         next[index]=freespot;
//         freespot=index;
//         return arr[index];   
//     }
// };    
// int main() {
//     kqueue q(10,3);
//     q.enqueue(10,1);
//     q.enqueue(15,1);
//     q.enqueue(20,2);
//     q.enqueue(25,1);
//     cout<<q.dequeue(1)<<endl;
//     cout<<q.dequeue(2)<<endl;
//     cout<<q.dequeue(1)<<endl;
//     cout<<q.dequeue(1)<<endl;

// }

// #include<iostream>
// using namespace std;
// #include<queue>
// int solve(int *arr,int n,int k) {
//     deque<int> maxi(k);
//     deque<int> mini(k);
    
//     for(int i=0;i<k;i++) {
//         while (!maxi.empty() && arr[maxi.back()]<=arr[i]) {
//             maxi.pop_back();
//         }
//         while (!mini.empty() && arr[mini.back()]>=arr[i]) {
//             mini.pop_back();
//         }
//         maxi.push_back(i);
//         mini.push_back(i);
//     }

//     int ans=0;
//     for(int i=k;i<n;i++) {
//         ans+=arr[maxi.front()]+arr[mini.front()];
//         while(!maxi.empty() && i-maxi.front()>=k) {
//             maxi.pop_front();
//         }
//         while(!mini.empty() && i-mini.front()>=k) {
//             mini.pop_front();
//         }
//         while (!maxi.empty() && arr[maxi.back()]<=arr[i]) {
//             maxi.pop_back();
//         }
//         while (!mini.empty() && arr[mini.back()]>=arr[i]) {
//             mini.pop_back();
//         }
//         maxi.push_back(i);
//         mini.push_back(i);   
//     }
//      ans+=arr[maxi.front()]+arr[mini.front()];
//      return ans;
//     }
// int main() {
//     int arr[7]={2,5,-1,7,-3,-1,-2};
//     int k=4;
//     cout<<solve(arr,7,k);
//     return 0;
// }
