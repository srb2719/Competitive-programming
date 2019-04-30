#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int temp;
		int a, b, c, long long int K;;
		cin>>temp>>K;
		a = temp%10;
		temp = temp/10;
		b = temp%10;
		temp = temp/10;
		c = temp;
		//cout<<c<<b<<a<<endl;
		if(a==b && b==c)
		{
			cout<<"1"<<endl;
		}
		else if(a==b || b==c || c==a)
		{
			cout<<"8"<<endl;
		}
		else if(a!=b || b!=c || c!=a)
		{
			cout<<"27"<<endl;
		}
	}
	return 0;
}
