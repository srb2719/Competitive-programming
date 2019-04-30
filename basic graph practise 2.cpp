#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> v)

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        ll n, m;
        ll u, v;
        cin >> n >> m;
        vector<int> adj[m];
        for(ll i = 1; i <= n; i++)
        {   
            
        }
        for(ll i = 0; i < m; i++)
        {
            cin >> u >> v;
            addEdge(adj, u, v);
        }

    }
}