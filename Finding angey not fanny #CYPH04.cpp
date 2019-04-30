#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int factorial(int n)
{
    if(n>1)
    {
        return(n * factorial(n-1));
    }
    else 
        return 1;
}

int allthepath(int num1, int num2)
{
    int z;
    z = (factorial(num1+num2))/(factorial(num1) * factorial(num2));
    return z;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int a, b, x, y, p, q;
        cin >> a >> b >> x >> y >> p >> q;
        int m, n;
        int b1, b2;
        int c1, c2;
        m = a - x; n = b - y;
        b1 = p - x; b2 = q - y;
        c1 = a - p; c2 = b - q;
        int answer;
        answer = allthepath(m, n) - (allthepath(b1, b2) * allthepath(c1, c2));
        cout << answer << endl;
    }

    return 0;
}