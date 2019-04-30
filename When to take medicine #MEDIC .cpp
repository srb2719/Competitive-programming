#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool is_leap(int z)
{
    if(z % 400 == 0)
    {
        return true;
    }
    else if(z % 100 == 0)
    {
        return false;
    }
    else if(z % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}    


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tt;
    cin >> tt;
    while(tt--)
    {
        int y, m, d;
        ll answer;
        string str, yyyy, dd, mm;
        cin >> str;
        yyyy = str.substr(0, 4);
        mm = str.substr(5, 2);
        dd = str.substr(8);
        y = stoi(yyyy);
        m = stoi(mm);
        d = stoi(dd);
        if(is_leap(y) && (m==1 || m==2 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12))
        {
            if(m != 2)
            {
                answer = ((31 - d)/2) + 1;
            }
            else
            {
                answer = ((29 - d)/2) + 1;
            }           
        }
        else if(is_leap(y) && (m==4 || m==6 || m==9 || m==11))
        {
            answer = ((31+30-d)/2) + 1;
        }
        else if(!is_leap(y) && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12))
        {
                answer = ((31-d)/2)+1;
        }
        else if(!is_leap(y) && (m==4 || m==6 || m==9 || m==11 || m == 2))
        {
            if(m == 2)
            {
                answer = ((28 + 31 - d)/2) + 1;
            }
            else
            {
                answer = ((30 + 31 - d)/2) + 1;
            }   
        }
        cout << answer << endl;
        
    }


    return 0;
}