#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T!=0)
	{
		T--;
		int N, K;
		cin>>N>>K;
		cout<<endl<<N;
		int arr[N], sum=0, max = 0;
		for(int i=0; i<N; i++)
		{
			cin>>arr[i];
		}
		for(int j=0; j<N; j++)
		{
			for(int k=j; k<N; k+K)
			{
				sum = sum + arr[k];
			}
			if(sum>max)
			{
				max = sum;
			}
		}
		cout<<max<<endl;
	}
}
