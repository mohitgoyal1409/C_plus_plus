#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    vector<int> prefix(n);

    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }
}