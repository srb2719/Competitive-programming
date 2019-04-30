#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int combi(int n, int r, int p) 
{ 
    
    int C[r+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1;  
    for (int i = 1; i <= n; i++) 
    { 
        
        for (int j = min(i, r); j > 0; j--)  
            C[j] = (C[j] + C[j-1])%p; 
    } 
    return C[r]; 
} 
int main() 
{ 
    int n = 500, r = 250; ll  p = 1000000007; 
    cout << "Value of nCr % p is " << nCrModp(n, r, p)<<endl; 
    return 0; 
} 