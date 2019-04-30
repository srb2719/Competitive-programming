#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
	string n;
	cin>>n;
	int flag = 0;
	for(int i=0; i<n.length(); i++)
	{
		if(n[i] == '4' || n[i] == '7')
		{
			flag = 0 ;
		}
		else
		{
			flag = 1;
			break;
		}
	}
	
	int i = atoi(n.c_str());
	if(flag == 0)
	{
		cout<<"YES";
	}
	else
	{
		if(i%4 == 0 || i%7 == 0 || i%47 == 0)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
	}
}	
