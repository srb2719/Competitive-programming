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
        ll n;
        ll answer = 0;
        cin >> n;
        vector<ll> arr;
        vector<ll> arr2;
        vector<ll> dp, dp2;
        ll temp;
        ll sum1 = 0, sum2 = 0;
        ll k;
        for(ll i = 0; i < n; i++)
        {
            cin >> k;
            arr.push_back(k);
            sum1 = sum1 + k;
            dp.push_back(sum1);
        }

        for(ll i = 0; i < n; i++)
        {
            cin >> k;
            arr2.push_back(k);
            sum2 = sum2 + k;
            dp2.push_back(sum2);
        }
        ll max = INT_MIN;
        for(ll i = 0; i < n; i++)
        {
            k = abs(dp[i] - dp2[i]);
            if(k > max)
            {
                max = k;
                if(i == n-1)
                {
                    if(dp[n-1] > dp2[n-1])
                    {
                        answer = dp[n-1];
                    }
                    else
                    {
                        answer =  dp2[n-1];
                    }
                }
                else
                {
                    temp = i;
                }
            }
        }
        if(answer == 0)
        {
            k = 0;
            if(dp[temp] > dp2[temp])
            {
                for(ll i = temp+1; i<n; i++)
                {
                    k = k + arr2[i];
                }
                answer = dp[temp] + k;
            }
            else
            {
                for(ll i = temp+1; i<n; i++)
                {
                    k = k + arr[i];
                }
                answer = dp2[temp] + k;
            }     
        }

        cout << answer << endl;
    }

    return 0;
}