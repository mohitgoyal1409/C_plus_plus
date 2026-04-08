#include<iostream>
using namespace std;

class circularQueue {
    public:
    int *arr;
    int fronts;
    int rear;
    int size;
      
    circularQueue(int size) {
        this->size = size;
        arr = new int[size];
        fronts = rear = -1;
    }

    void enqueue(int value) {
        if((fronts == 0 && rear == size-1) || (rear==(fronts-1)%(size-1))){
            cout<<"queue is full"<<endl;
        }
        else if(fronts==-1) {
                fronts=rear=0;
                arr[rear]=value;
            }
        else if(rear == size-1 && fronts!=0) {
            rear =0;
            arr[rear] = value;
        }
        else {
            rear++;
            arr[rear]=value;
        }
    }

    int dequeue()  {
        if(fronts == -1) {
            cout<<"queue is empty"<<endl;
            return -1;
        }

        int ans = arr[fronts];
        arr[fronts]= -1;
        if(fronts == rear) {
             fronts = rear = -1;
        }
        else if(fronts==size-1){
            fronts = 0;
        }
        else{
            fronts++;
        }
        return ans;
    }
    
    void print() {
        for(int i=0;i<5;i++) {
            cout<<arr[i]<<" ";
        }
    }
   
};
                      
int main() {
    circularQueue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(9);
    cout<<q.dequeue()<<endl;
    q.enqueue(10);
    cout<<q.dequeue()<<endl;
    // q.enqueue(11);
    // q.enqueue(12);
    q.print();
    
}