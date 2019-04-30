#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin >> s;
        int size = s.size();
        long long int rcou = 0, answer, first, temp;
        for(long long int i = size-1; i>=0; i--)
        {
            if (s[i] == 'F')
            {
                temp = i;
                break;
            }
            else if (s[i] == 'L' || s[i] == 'R')
            {
                rcou++;
            }
        }
        first = size - temp;
        answer = (2*first) + 1 + (rcou);
        cout << answer;
    }
}