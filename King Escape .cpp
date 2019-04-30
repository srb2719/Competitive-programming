#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    if(bx < ax && cx > ax)
    {
        cout << "NO";
    }
    else if(bx > ax && cx < ax)
    {
        cout << "NO";
    }
    else if(by > ay && cy < ay)
    {
        cout << "NO";
    }
    else if(by < ay && cy > ay)
    {
        cout <<"NO";
    }
    else
    {
        cout << "YES";
    }
    
    

    return 0;
}