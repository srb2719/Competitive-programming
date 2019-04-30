#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        ll n, a, b, x, y, z, k;
        ll count = 0;
        cin >> n >> a >> b >> x >> y >> z;
        vector<ll> con;
        cout <<"YO";
        for(ll i = 0; i < n; i++)
        {
            cin >> k;
            con.push_back(k);
        }
        cout <<"YO2";
        sort(con.begin(), con.end(), greater<int>());
        cout <<"YO3";
        while(a != z || b != z)
        {
            a = a + x;
            b = b + y;
        }
        cout <<"YO4";
        if(a > b)
        {
            cout << 0 << endl;
        }
        else
        {
            a = a - x;
            b = b - y;
            while(a != z)
            {
                a = a + con[0];
                count++;
                con[0] = con[0] / 2;
                sort(con.begin(), con.end(), greater<int>());
                if(con[0] == 1)
                {
                    cout << "RIP" << endl;
                    break;
                }
            }

                cout << count << endl;
		}
    }

    return 0;
}
