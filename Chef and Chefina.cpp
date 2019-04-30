#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int H, K, Ss, Se, Q, max1= 0, max2=0, max3= 0, sub;
		cin>>H>>K;
		for(int i=0 ; i<K; i++)
		{
			cin>>Ss>>Se>Q;
			sub = (Se-Ss)/Q;
			if(sub>max1)
			{
				max1 = sub;
			}
			else if(sub<max1 && sub>max2)
			{
				max2 = sub;
			}
			else if(sub<max1 && sub<max2 && sub>max3)
			{
				max3 = sub
			}
		}
	}
}
