#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    set<ll> s;
    set<ll>::iterator it;
    ll k;
    for(ll i = 0; i < n; i++)
    {
        cin >> k;
        s.insert(k);
    }
    set<ll>::iterator it1 = s.begin();
    set<ll>::iterator it2 = next(it1, 1);
    set<ll>::iterator it3 = next(it2, 1);
    if(s.size() == 1)
    {
        cout << 0 <<endl;
    }
    else if(s.size() > 3)
    {
        cout << -1 << endl;
    }

    else if(s.size() == 3)
    {
        if((*it2 - *it1) == (*it3 - *it2))
        {
            cout << (*it3 - *it2) <<endl;
        }
        else
        {
            cout << "-1" << endl;
        }
        
    }

    else
    {
        if((*it2 - *it1)%2 == 0)
        {
            cout << (*it2 - *it1) / 2 << endl;
        }
        else
        {
            cout << *it2 - *it1;
        }
        
    }
    


    return 0;
}