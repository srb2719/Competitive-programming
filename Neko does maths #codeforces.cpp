#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b;
    cin >> a >> b;
    int flag = 0;
    ll sum = 0;
    vector<ll> arr;
    for(ll i = 1; i <= a; i++)
    {
        if(a % i == 0)
        {
            if (i == b)
            {
                flag = 1;
                break;
            }
            sum = sum + i;
        }
    }
    if(flag != 1)
    {
        cout << sum << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    

    return 0;
}