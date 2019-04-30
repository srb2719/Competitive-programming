#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--)
    {
        long long int n, d, x, k;
        vector<long long int> arr;
        cin >> n >> d >> x;
        for(long long int i = 0; i<n; i++)
        {
            cin >> k;
            if (k % 2 == 0)
            {
                k = k +d;
                arr.push_back(k);
            }
            else
            {
                k = k - d;
                arr.push_back(k);
            }
            
        }

        for(long long int j = 0; j<n; j++)
        {
            if(arr[j] > 0 && arr[j] < x)
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}