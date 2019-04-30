#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int N, L, i, k;
		int flag = 0;
		vector<int> arr;
		cin>>N>>L;
		for(i=0; i<L; ++i)
		{
			cin>>k;
			arr.push_back(k);
		}
		vector<int> prime;
		for(i=3; i<=103; i++)
		{
			for(int j=2; j<=sqrt(i); ++j)
			{
				if(i%j==0)
				{
					flag = 1;
					break;
				}
			}
			if(flag == 0)
			{
				prime.push_back(i);
			}
			flag = 0;
		}
		vector<int>::iterator it;
		for(it=prime.begin(); it!=prime.end(); ++it)
		{
			cout<< *it<<" ";
		}
		string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		vector<string> answer;
		int m1=0, m2=1, z = 0;
		int size = L;
		while(size--)
		{
			for(m1; m1<prime.size(); m1++)
			{
				for(m2; m2<prime.size(); m2++)
				{
					if(prime[m1]*prime[m2] == arr[z])
					{
						cout<<"YOO";
						cout<<alphabet[m1];
					}
				}
			}
			z++;
		}
	}
}
