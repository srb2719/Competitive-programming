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
        long long int count = 0;
        vector<long long int> arr2;
        for(long long int i = n-1; i >=0; i--)
        {
            value = arr[i]/2;
            for(long long int j = 0; j<n; j++)
            {
                if(arr[j] <= value)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            arr2.push_back(count);
            count = 0;
        }

        long long int maxi = -1, tempi;
        for(long long int i = 0; i<=arr2.size(); i++)
        {
            if(arr2[i]> maxi)
            {
                maxi = arr2[i];
                tempi = i;
            }
        }
        cout << maxi+1 << " "<< arr[n-tempi-1] << endl;

    }
}
