#include<iostream>
using namespace std;
int main() {
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[5]={1,2,3,4,5};
    int size = 8;
    for(int i=0;i<size;i=i+2) {
        if(i+1<size) {
            swap(even[i],even[i+1]);
        }
    }
    int oddsize = 5;
    for(int i=0;i<oddsize;i=i+2){
        if(i+1<oddsize) {
            swap(odd[i],odd[i+1]);
        }
    }

    for(int i=0;i<oddsize;i++) {
        printf("%d ",odd[i]);
    }
    printf("\n");
    for(int i=0;i<size;i++) {
        printf("%d ",even[i]);
    }
}