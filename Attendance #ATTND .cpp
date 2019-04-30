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
        string str1, str2;
        vector<string> arr;
        vector<string> arr2;
        vector<ll> cou;
        for(ll i = 0; i < n; i++)
        {
            cin >> str1;
            cin >> str2;
            arr.push_back(str1);
            arr2.push_back(str2);
        }
        ll count = 0;
        for(ll i = 0; i < n; i++)
        {
            for(ll j = 0; j < n; j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                }
            }
            cou.push_back(count);
            count = 0;
        }
        for(ll i = 0; i < n; i++)
        {
            if(cou[i] == 1)
            {
                cout << arr[i] << endl;
            }
            else
            {
                cout << arr[i] << " " << arr2[i] << endl;
            }
            
        }
    }

    return 0;
}
