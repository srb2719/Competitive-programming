#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, t, x, y;
    cin>>n>>t;
    vector<int> s;
    vector<int> a;
    for(long long int i= 0; i<n; i++)
    {
        cin>>x>>y;
        s.push_back(x);
        a.push_back(y);
    }

    for(long long int j= 0; j<n; j++)
    {
        if(s[j] == t)
        {
            cout<<j+1<<endl;
            break;
        }
        else
        {
            s[j] = s[j] + a[j];
        }
        
    }

}
