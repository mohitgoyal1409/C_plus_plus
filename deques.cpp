#include<iostream>
using namespace std;

class dqueue {
    public:
    int *arr;
    int fronts;
    int rear;
    int size;

    dqueue(int n) {
        size = n;
        arr = new int[n];
        fronts = -1;
        rear = -1;
    }

    bool enqueue(int x) {
        if((fronts == 0 && rear == size-1) || (rear==(fronts-1)%(size-1))){
           return false;
        }
        else if(fronts == -1) {
            fronts= rear = 0;
        }
        else if(fronts==0) {
            fronts = size-1;
        }
        else {
            fronts--;
        }
        arr[fronts]=x;
        return true;
    }

    bool pushrear(int x) {
        
    }


};