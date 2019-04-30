#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while(T--)
    {
        ll n, k;
        cin >> n;
        vector<ll> arr1, arr2;
        ll sum1 = 0, sum2 = 0;
        for(ll i = 0; i < n; i++)
        {
            cin >> k;
            sum1 = sum1 + k;
            arr1.push_back(sum1);
        }

        for(ll i = 0; i < n; i++)
        {
            cin >> k;
            sum2 = sum2 + k;
            arr2.push_back(sum2);
        }
        ll profit1;
        ll max = INT_MIN;
        for(ll i = 0; i < n; i++)
        {
            profit1 = arr1[i] + sum2 - arr2[i];
            if(profit1 > max)
            {
                max = profit1;
            }
        }
        if(sum2 > max)max = sum2;
        if(sum1 > max)max = sum1;

        cout << max << endl;
    }

    return 0;
}