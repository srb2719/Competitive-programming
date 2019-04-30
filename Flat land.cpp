#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N, a, count = 0, temp;
		cin>>N;
		temp = N;
		while(temp != 0)
		{
			a = sqrt(temp);
			a = int(a);
			temp = temp - (a*a);
			count++;
		}
		cout<<count<<"\n";
	}
}
