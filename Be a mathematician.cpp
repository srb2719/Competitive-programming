#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int N;
    cin >> N;
    long long int X, Y;
    cin >> X >> Y;
    long long int m, n;
    m = N / X;
    n = N / Y;
    if (m > n)
    {
        cout << "ABHISHEK " << m-n;
    }
    else if (n > m)
    {
        cout << "PARTH " << n-m;
    }
    else
    {
        cout << "TIE";
    }
    

}