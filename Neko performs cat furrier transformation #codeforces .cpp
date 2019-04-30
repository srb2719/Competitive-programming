#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int xor(int x, int y) 
{ 
    int answer = 0;
      
    for (int i = 31; i >= 0; i--)                      
    { 
       bool b1 = x & (1 << i); 
       bool b2 = y & (1 << i); 
          
        bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);           
  
        answer <<= 1; 
        answer |= xoredBit; 
    } 
    return answer; 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x;
    cin >> x;
    int n = 7;
    double k = (x + 1) / 2;
    while((abs(k - int(k)) != 0))
    {
        x = xor(x, 31);
    }


    return 0;
}   