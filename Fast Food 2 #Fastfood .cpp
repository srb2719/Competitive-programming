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
        cin >> n;
        vector<ll> arr;
        vector<ll> arr2;
        vector<ll> dp, dp2;
        vector<ll> sub1, sub2;
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
        ll temp1;
        ll max1 = -500;
        for(ll i = 0; i < n; i++)
        {
            k = abs(dp[i] - dp2[i]);
            if(k >= max1)
            {
                max1 = abs(dp[i] - dp2[i]);
                temp1 = i;
            }
        }
        ll answer = 0, answer2 = 0;
        for(ll i = 0; i < n; i++)
        {
            if(i == temp1+1)
            {
                answer = answer + arr2[i];
                answer2 = answer2 + arr[i];
            }
            else
            {
                answer = answer + arr[i];
                answer2 = answer2 + arr2[i];
            }
        }

        if(answer > answer2)
        {
            cout << answer << endl;
        }
        else
        {
            cout << answer2 << endl;
        }
        

        
        
    }

    return 0;
}