#include<iostream>
using namespace std;

int singleNumber(int a[],int n){
    int start = 0,end = n-1,mid;

    while(start<=end){
        mid = (start + end) / 2;
        if(mid==n-1||mid==0){
            return a[mid];
            break;
        }

        if((mid == n-1 || mid ==0) && (a[mid] != a[mid-1] && a[mid] != a[mid+1] ))
            return a[mid];

        if(a[mid] == a[mid-1]){
            int element = (mid-start+1);
            if(element%2==0){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        else if(a[mid] == a[mid+1])
        {
            int element = (end-mid+1);
            if(element%2==0){
                end = mid-1;
            }
            else{
                start = mid + 1;
            }
        }
    }
}
int main(){
    int n,a[10];
    cout << "Enter no.of elements : ";
    cin >> n;

    cout << "Enter elements : " << endl;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int ans = singleNumber(a,n);
    cout << ans << endl;
    return 0;
}