#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll m, n, k;
    cin >> m >> n;
    ll even_count = 0, odd_count = 0, even_count2 = 0, odd_count2 = 0;
    for(ll i = 0; i < n; i++)
    {
        cin >> k;
        if(k % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
        
    }
    ll count = 0;
    for(ll i = 0; i < m; i++)
    {
        cin >> k;
        if(k % 2 == 0)
        {
            even_count2++;
        }
        else
        {
            odd_count2++;
        }
        
    }

    ll answer;
    answer = min(even_count2, odd_count) + min(even_count, odd_count2);

    cout << answer << endl;

    return 0;
}