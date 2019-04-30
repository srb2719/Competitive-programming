#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

bool isPalindrome(string str){
    for(int i = 0; i <= str.length()-1; i++)
    {
        if(str[i] != str[str.length()-1-i])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main()
{
    string s;
    string temp1, temp2;
    cin>>s;
    int n = s.length();
    for(int i=0; i < n ; i++)
    {
        for(j=0; j<n-1 && j != n-1 ; j++)
        {
            temp1 = s.substr(i, j+1);

            for(int k = j; k) 
        }
    }
}