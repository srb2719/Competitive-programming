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
    vector<int> arr;
    vector<int> arr2;
    int k, count = 0;
    bool answer = true;
    bool main_answer = false;
    for(int i = 1; i <= n; i++)
    {
        cin >> k;
        arr.push_back(k);

        if(i == 1 && k == 0)
        {
            answer = false;
        }
    }

    for(int i = 1; i <= n; i++)
    {
        cin >> k;
        arr2.push_back(k);
    }
    int j = s;
    cout << answer;
    if(answer)
    {
        while(j <= n)
        {
            if(arr2[j] == 1)
            {
                if(arr[j] == 1)
                {
                    main_answer = true;
                    break;
                }
                else
                {
                    j++;
                    if(j+1 == n)
                    {
                        break;
                    }
                }
                
            }
        }
    }

    if(answer && main_answer)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    


    return 0;
}