#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int T;
    cin >> T;
    while (T--)
    {
        long long int M, k, N, sum = 0;
        cin >> M;
        vector<long long int> arr;
        for (long long int i = 0; i<M; i++)
        {
            cin >> k;
            arr.push_back(k);
        }

        cin >> N;
        sort(arr.begin(), arr.end());

        for (long long int k = N; k < arr.size() - N; k++)
        {
            sum = sum + arr[k];
        }

        cout << sum << endl;
        return 0;

    }


}