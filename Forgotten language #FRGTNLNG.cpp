//FRGTNLNG Fogrgotten language
#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T!=0)
	{
		T--;
		int N, K, num[20];
		string arr[10], arr2[20][10];
		cin>>N>>K;
		for(int i=0; i<N; ++i)
		{
			cin>>arr[i];
		}
		for(int j=0; j<N; j++)
		{
			cin>>num[j];
			for(int k=0; k<num[j]; k++)
			{
				cin>>arr2[k][1];
			}
		}
		for(int a0=0; a0<N; a0++)
		{
			for(int a1=0; a1<num[a0]; a1++)
			{
				cout<<a1<<" ";
			}
		}
	}
}
