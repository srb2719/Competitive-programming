#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int arr[26] = {0};
    long long int count = 0, count2 = 0;
    for(int i = 0; i<str.length(); i++)
    {
        arr[str[i] - 'a']++;
    }
    for(int i : arr)
    {
        if(i >= 2 && i < 4)
        {
            count++;
        }
        else if(i >= 4)
        {
            count2++;
        }
    }

    int answer;
    answer = (count + count2) * (count + count2 - 1);
    answer = answer + count2;
    cout << answer << endl;
    return 0;
}