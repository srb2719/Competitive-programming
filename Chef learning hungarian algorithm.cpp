#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll T;
    cin >> T;
    while(T--)
    {
        ll n;
        cin >> n;
        int flag = 0;
        int arr[n][n];
        ll row_count = 0, col_count = 0;
        for(ll i = 0; i < n; i++)
        {
            for(ll j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if(arr[i][j] == 0)
                {
                    flag = 1;
                }
            }
            if(flag == 1)row_count++;
            flag = 0;
        }

        flag = 0;
        for(ll i = 0; i < n; i++)
        {
            for(ll j = 0; j < n; j++)
            {
                if(arr[j][i] == 0)
                {
                    flag = 1;
                }
            }
            if(flag == 1)col_count++;
            flag = 0;
        }

        if(row_count == n && col_count == n)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}