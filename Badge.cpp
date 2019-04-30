#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void addEdge(vector<ll> adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;


    return 0;
}