#include<iostream>
using namespace std;

class Queue {
    public:
    int *arr;
    int fronts;
    int rear;
    int size;

    Queue(int size) {
        this->size = size;
        arr = new int[size];
        rear =0;
        fronts = 0;
    }

    void enQueue(int data) {
        if(rear == size) {
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int deQueue() {
        if(fronts==rear) {
            cout<<"Queue is empty"<<endl;
             return -1;
        }
        else {
            int ans = arr[fronts];
            arr[fronts]=-1;
            fronts++;
            if(fronts==rear) {
               fronts = 0;
               rear = 0;
            }
            return ans;
        }
    }

    int front() {
        if(fronts==rear) {
            return -1;
        }
        else {
            return arr[fronts];
        }
    }

    bool isempty() {
        if(fronts==rear) {
            return true;
        }
        else {
             return false;
        }
    }

};

int main() {
    Queue q(5);
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(4);
    q.enQueue(3);
    q.enQueue(9);
    cout<<q.front()<<endl;
    cout<<q.deQueue()<<endl;
    cout<<q.front()<<endl;
    cout<<q.isempty()<<endl;
}