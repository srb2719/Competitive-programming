#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	long long int count = 0;
	while(T--)
	{
		count++;
		long long int N, total, i;
		cin>>N;
		2
		string P;
		total = (2*N) -2;
		char z[total+100];
		cin>>P;
		stringstream ss;
		for(i=0; i<total; i++)
		{
			if(P[i] == 'S')
			{
				ss<<'E';
			}
			else
			{
				ss<<'S';
			}
		}
		cout<<"Case #"<<count<<": "<<ss.str()<<endl;
	}
}
