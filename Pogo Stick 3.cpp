#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std; 
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int N, K;
		cin>>N>>K;
		long long int arr[N];
		for(long long i=0; i<N; i++)
		{
			cin>>arr[i];
		}
		
		long long int max = INT_MIN;
		long long int dp[N];
		
		for(int i=N-1; i>=0; i--)
		{
			if((i+K)>=N)
			{
				dp[i] = arr[i];
			}
			
			else
			{
				dp[i] = (dp[i+K]+ arr[i]);
			}
		}
		
		for(int k=0; k<N; k++)
		{
			if (dp[k]>max)
			{
				max = dp[k];
				cout<"abbc";	
			}
		}
		cout<<max<<endl;
	}
	getchar();
	return 0;
}
