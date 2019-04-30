#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n, a, count0=0, count1=0;
	cin>>n;
	for(long long i=0; i<n; i++)
	{
		cin>>a;
		if(a==0)
		{
			count0 = i;
			
		}
		else
		{
			count1 = i;
			
		}
	}
	
	if(count0<=count1)
	{
		cout<<count0+1;
	}
	else
	{
		cout<<count1+1;
	}
}


