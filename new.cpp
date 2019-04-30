#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int T;
    cin >> T;
    while(T--)
    {
        long long int n, k;
        vector<long long int> arr;
        cin >> n;
        for (long long int i = 0; i < n; i++)
        {
            cin >> k;
            arr.push_back(k);
        }
        sort(arr.begin(), arr.end());

        long long int value;
        vector<long long int> arr2;
        long long int count = 0;
        for(long long int j = n-1; j>=0; j--)
        {
            value = arr[j]/2;

            
            arr2.push_back(count);
            count = 0;
        }
        long long int max = -1;
        long long int temp;
        for(long long int i = 0; i<n; i++)
        {
            if(arr2[i] >= max)
            {
                max = arr2[i];
                temp = i;
            }
        }

        cout << max+1 << " " << arr[n-temp-1] <<endl;
    }
}