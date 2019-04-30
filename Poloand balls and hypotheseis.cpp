#include<bits/stdc++.h>
using namespace std;


bool prime(long long int x)
{
	int flag =0;
	int n;
	if(x==1)
	{
		return false;	
	}
	else if(x==2)
	{
		return true;
	}
	else
	{
		for(long long int i=2; i<=sqrt(x); ++i)
		{
			if(x%i == 0)
			{
				flag = 1;
				break;
			}
		}	
		if(flag == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

int main()
{
	long long int n;
	cin>>n;
	long long int m = 1;
	long long temp = n;
	while(true)
	{
		n = temp*m+1;
		if(prime(n) == false)
		{
			cout << m; 
			break;
		}
		else
		{
			m = m+1;
		}
	}
}
