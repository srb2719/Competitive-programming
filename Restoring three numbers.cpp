#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int x1, x2, x3, x4, max;
    vector<long long int> arr;
    cin >> x1 >> x2 >> x3 >> x4;
    arr.push_back(x1);
    arr.push_back(x2);
    arr.push_back(x3);
    arr.push_back(x4);
    sort(arr.begin(), arr.end());
    max = arr[3];
    long long int a, b, c;
    c = max - arr[0];
    b = max - arr[1];
    a = max - arr[2];
    cout << a << " " << b << " " << c << endl;
    return 0;
}