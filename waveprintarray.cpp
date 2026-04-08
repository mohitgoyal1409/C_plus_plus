#include<iostream>
using namespace std;

int main() {
    int arr[3][3];
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
    for(int col = 0;col<3;col++) {
        if(col&1) {
            for(int row = 2;row>=0;row--) {
                cout<<arr[row][col];
            }
        }
        else{
            for(int row = 0;row<=2;row++) {
                cout<<arr[row][col];
            }
        }
        cout<<endl;
    }

}