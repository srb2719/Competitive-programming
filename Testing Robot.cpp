#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int N, X;
		char S[150], a[150];
		int left=0, right=0, current, count=0;
		cin>>N>>X;
		a[0] = X;
		cin>>S;
		for(int i=0; i<N; i++)
		{
			if(S[i]=='L')
			{
				a[i+1] = a[i] - 1;
			}
			else
			{
				a[i+1] = a[i] + 1;
			}
		}
		for(int j=0; j<N; j++)
		{
			cout<<a[j];
		}
	}
	return 0;
}
