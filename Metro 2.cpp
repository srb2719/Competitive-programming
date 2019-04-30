#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, s;
    cin >> n >> s;
    int k;
    vector<int> arr, arr2;
    bool answer = false;
    for(int i = 1; i <= n; i++)
    {
        cin >> k;
        arr.push_back(k);
    }

    for(int i = 1; i <= n; i++)
    {
        cin >> k;
        arr2.push_back(k);
    }

    for(int i = s; i <= n; i++)
    {
        if(arr2[s-1] == 1)
        {
            if(arr2[i-1] == 1 && arr[i-1] == 1)
            {
                answer = true;
            }
        }
    }
    if(arr[s-1] == 1)
    {
        answer = true;
    }

    if(arr[0] == 0)
    {
        answer = false;
    }

    if(arr[s-1] == 0 && arr2[s-1] == 0)
    {
        answer = false;
    }

    if(answer)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    

    return 0;
}