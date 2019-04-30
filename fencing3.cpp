#include<bits/stdc++.h>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int N, M, K, count = 0, i;
        cin>>N>>M>>K;
        pair<long long int , long long int> p;
        set<pair<long long int, long long int>> f;
        for(i=0; i<K; i++)
        {
            cin>>p.first;
            cin>>p.second;
            f.insert(p);
        }

        for(set<pair<long long int, long long int>>::iterator itr = f.begin(); itr != f.end(); itr++)
        {
            pair<long long int, long long int> up, down, left, right;
            p = *itr;
            up.first = p.first - 1;
            up.second = p.second;
            down.first = p.first;
            down.second = p.second + 1;
            left.first = p.first+1;
            left.second = p.second;
            right.first = p.first;
            right.second = p.second -1;
            if(f.find(up) == f.end())
            {
                count++;
            }
            if(f.find(down) == f.end())
            {
                count++;
            }
            if(f.find(left) == f.end())
            {
                count++;
            }
            if(f.find(right) == f.end())
            {
                count++;
            }
        }
        cout<<count<<"\n";
    }
}