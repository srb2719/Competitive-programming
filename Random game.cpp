#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll T;
    cin >> T;
    while(T--)
    {
        ll n; 
        cin >> n;
        string str;
        ll arr[26] = {0};
        vector<ll> arr2;
        for(ll i = 0; i < n; i++)
        {
            cin >> str;
            for(ll j = 0; j<str.length(); j++)
            {
                arr[str[j] - 'a']++;
            }
        }
        arr[2] = arr[2] / 2;
        arr[4] = arr[4] / 2;
        arr2.push_back(arr[2]);
        arr2.push_back(arr[14]);
        arr2.push_back(arr[3]);
        arr2.push_back(arr[4]);
        arr2.push_back(arr[7]);
        arr2.push_back(arr[5]);
        ll min = INT_MAX;
        for(ll i = 0; i<6; i++)
        {
            if(arr2[i]<min)
            {
                min = arr2[i];
            }
        }
        cout << min << endl;
    }

    return 0;
}