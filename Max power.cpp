#include<bits/stdc++.h>
using namespace std;

int valueOfPower(int num) 
{ 
    return log2(num & (~(num - 1))); 
} 
 

int main()
{
    long long int N, sum = 0, len;
    cin>>N;
    string X;
    cin>>X;
    reverse(X.begin(), X.end());
    len = X.length();
    for(long long int i=0; i<len; i++)
    {
        if(X[i] == '1')
        {
            sum = sum + pow(2, i);
        }
    }
    cout << "sum : " << sum << endl;
    cout<< valueOfPower(sum) << endl;
}