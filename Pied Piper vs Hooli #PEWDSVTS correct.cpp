#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--)
    {
        ll n, a, b, x, y, z;
        ll k;
        cin >> n >> a >> b >> x >> y >> z;
        long long int m;
        bool win;
        ll count = 0;
        priority_queue<ll> arr;
        for(ll i = 0; i<n; i++)
        {
            cin >> k;
            arr.push(k);
        }
        while(a < z && b < z)
        {
            a = a + x;
            b = b + y;
        }
        if(a >= z && b < z)
        {
            win = true;
        }
        else
        {
            a = a - x;
            b = b - y;
            while(a < z && arr.top())
            {
                m = arr.top();
                a = a + m;
                arr.pop();
                arr.push(m/2);
                count++;
            }
        }
        if(a >= z)
        {
            win = true;
        }
        else
        {
            win = false;
        }
        


        if(win)
        {
            cout << count << endl;
        }
        else
        {
            cout << "RIP" << endl;
        }
        
    }

    return 0;
}