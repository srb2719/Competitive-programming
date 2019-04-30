#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string c;
		long long int a, b, sum1=0, sum2=0, max=0;
		cin>>c;
		a = c.size();
		int cou = 0;
		for(int i=0; i<a; i++)
		{
			sum1 += int(c[i]);
			if(((int)c[i])>max)
			{
				max = (int)c[i];
			}
			cou = cou + i;
		}
		sum2 = max*a;
		sum2 = sum2 - cou;
		if(sum1==sum2)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
}
