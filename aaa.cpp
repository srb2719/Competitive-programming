#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> vec;
int main() {
    // your code goes here
    ll t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       ll temp;
       vec.clear();
       for(ll i = 0; i<n; i++){
           cin>>temp;
           vec.push_back(temp);
       }
    //    for(ll i = 0; i<n; i++){
    //        cout<<vec[i];
    //    }
       sort(vec.begin(), vec.end());
       ll divi; ll index; ll sel;
       for( ll i = n-1; i>=0; i--){
           ll flag = 1;
           divi = vec[i]/2;
           
           if(divi>=vec[i-1]){
               index = i+1;
               sel = vec[i];
               break;
           }
           if(i == 0){
               index = 1;
               sel = vec[0];
               break;
           }

       }
       cout<<index<<" "<<sel<<endl;
       vec.clear();
    }
    return 0;
    }