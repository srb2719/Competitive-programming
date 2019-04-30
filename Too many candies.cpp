#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N, M, K, count = 0, newN;
		cin>>N>>M>>K;
		newN = N
		while(N%M!=0)
		{
			N = N-K;
			count++;
		}
		if(newN==0 || newN<M)
		{
			cout<<"-1"<<endl;
		}
		else if(newN == M)
		{
			cout<<"0"<<endl;
		}
		else
		{
			cout<<count<<endl;
		}
	}
}
