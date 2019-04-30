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
        string hometeamname, awayteamname;
        ll home_goals, away_goals;
        string ran;
        set<pair<string, ll>> s;
        set<string>::iterator itr;
        pair<string, ll> p;
        vector<ll> arr;
        int flag = 0, flag2 = 0;
        for(int i = 0; i < 12; i++)
        {
            cin >> hometeamname >> home_goals >> ran >> awayteamname >> away_goals;
            for(itr = s.begin(); itr != s.end(); itr++)
            {
                if(*itr.first == hometeamname)
                {
                    flag = 1;
                    *itr.second = *itr.second + home_goals;
                }
                else if(*itr.first == awayteamname)
                {
                    flag2 = 1;
                    *itr.second = *itr.second + away_goals;
                }                     
            }
        }
        if(flag == 0)
        {
            p.first = hometeamname; p.second = home_goals;
            s.insert(p);
        }
        if(flag2 == 0)
        {
            p.first = awayteamname; p.second = away_goals;
            s.insert(p);
        }


    }

    return 0;
}