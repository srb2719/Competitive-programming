#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, l, m, count = 0;
	cin>>n;
	for(int i = 0; i<n ; i++)
	{
		cin>>k>>l>>m;
		if((k == 1 && l == 1) || (k == 1 &&  m == 1) || (l == 1 && m == 1))
		{
			count++;
		}
		else 
		{
			continue;
		}
	}
	cout << count;
}
