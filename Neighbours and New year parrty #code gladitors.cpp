#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int N, k;
		cin>>N;
		vector<long long int> arr;
		for(long long int i=0; i<N; i++)
		{
			cin>>k;
			arr.push_back(k);
		}
		
		long long int min = INT_MAX;
		long long int flag = 0;
		ostringstream ss1;
		ostringstream ss2;
		long long int sum1 = 0, sum2 = 0;
		
		for(long long int i=N-1; i>=0; i--)
		{
			if(arr[i]>=0 && i%2 == 0)
			{
				sum1 = sum1 + arr[i];
				ss1<< arr[i];
			}
			else if(arr[i]>=0 && i%2 != 0)
			{
				sum2 = sum2 + arr[i];
				ss2<< arr[i]; 
			}
			
			if(arr[i]<min)
			{
				min = arr[i];
				if(i%2 == 0)
				{
					flag = 0;
				}
				else
				{
					flag = 1;
				}
			}
		}
		if(sum2 > sum1)
		{
			cout<<ss2.str()<<endl;
		}
		else if( sum1 > sum2)
		{
			cout<<ss1.str()<<endl;
		}
		else
		{
			if(flag == 0)
			{
				cout<<ss2.str()<<endl;
			}
			else
			{
				cout<<ss1.str()<<endl;
			}
		}
	}
}
