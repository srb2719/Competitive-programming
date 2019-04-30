#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll combi(ll n, ll r, ll modi);
ll pOdd(ll n){
    ll sum = 0;
    for( ll i = 2; i<= n ; i = i*2){
        sum  = sum + combi(n,i,1000000007);
        sum = sum%1000000007;
    }
    return sum;
}
ll pEven(ll n){
    ll sum = 0; 
    for( ll i = 1; i<= n; i++){
        sum = sum + combi(n,i,1000000007);
        sum = sum%1000000007;
    }
    return sum;
}
ll combi(ll c, ll r, ll modi) 
{ 
    
    ll arr[r+1]; 
    ll len = sizeof(arr);
    memset(arr, 0, len); 
    arr[0] = 1;  
    for (ll i = 1; i <= c; i++) 
    { 
        for (ll j = min(i, r); j > 0; j--)  
            arr[j] = (arr[j] + arr[j-1])%modi; 
    } 
    return arr[r]; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;ll temp;
        cin>>n;
        ll evenCount  =0, oddCount = 0;
        for( ll i = 0;i <n ; i++){
             cin>>temp;
             if(temp%2 == 0)evenCount++;
             else oddCount++;
        }
        ll pairOdd = pOdd(oddCount%100000007);
        ll pairEven = pEven(evenCount%100000007);
        ll pairEvenOdd = (pairEven*pairOdd)%100000007;
        
        ll total= pairEven + pairOdd + pairEvenOdd+1;
        cout<<total<<endl;
        
    }
}
