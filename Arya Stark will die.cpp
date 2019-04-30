#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        long long int count = 0;
        string str;
        cin >> str;
        for(long long int i=0; i<str.length() - 3; i++)
        {
            if(str[i] == 'a' && str[i+1] == 'p' && str[i+2] == 'o' && str[i+3] == 'c')
            {
                count++;
            }
            else 
            {
                continue;
            }
        }

        cout << count << endl;
    }
}