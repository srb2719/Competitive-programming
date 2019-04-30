#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
		long long m, n, i, j, flag = 1;
		cin>>m>>n;
		if(m==1)
		{
			cout<<2<<"\n";
			m = m+2;
		}
		if(m==2)
		{
			cout<<2<<"\n";
			m = m+1;
		}
		for(i=m; i<=n; i++)
		{
			for(j=2; j<=sqrt(i); j++)
			{
				if(i%j == 0)
				{
					flag = 0;
					break;
				}
			}
			if(flag == 1)
			{
				cout<<i<<"\n";
			}
			flag  = 1;
		}
	}
}
