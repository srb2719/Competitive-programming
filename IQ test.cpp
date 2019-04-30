#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; 
	cin>>n;
	vector<int> arr;
	int flag = 0, k;
	for(int i=0; i<n; i++)
	{
		cin>>k;
		arr.push_back(k);
	}
	
	//flag = 1 is even series
	if(arr[0]%2 == 0 && arr[1]%2 == 0)
	{
		flag = 1;
	}
	
	else if((arr[0]%2 == 0 && arr[1]%2 != 0) || (arr[1]%2 == 0 && arr[0]%2 != 0))
	{
		if(arr[2]%2 == 0)
		{
			flag = 1;
		}
		else
		{
			flag = 0;
		}
	}
	
	for(int i=0; i<n; i++)
	{
		if(flag == 1)
		{
			if(arr[i]%2 != 0)
			{
				cout<<i+1<<endl;
				break;
			}
			else
				continue;
		}
		
		else
		{
			if(arr[i]%2 == 0)
			{
				cout<<i+1<<endl;
				break;
			}
		}
	}
}
