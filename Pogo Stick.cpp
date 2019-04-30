#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int maximum(int x, int y, int z, int arr[])
{
	int q, sum=0;
	for(q=x; q<z; q+y)
	{
		sum = sum+arr[q];
	}
	cout<<sum;
	return sum;
}

int main()
{
	int max1=0;
	int T;
	cin>>T;
	while(T--)
	{
		long long int N, K;
		cin>>N>>K;
		int a[N], max=0;
		for(int i=0; i<N; i++)
		{
			cin>>a[i];
		}
		for(int k=0; k<=N; k++)
		{
			int m2 = maximum(k, K, N, a);
			if(m2>max)
			{
				max = m2;
			}
		}
		cout<<max;
	}
}
