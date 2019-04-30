#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
	long long int n, i, k;
	int max = INT_MIN;
	long int min = 1000000;
	int max_position, min_position;
	cin>>n;
	vector<int> vec;
	for(i=0; i<n; ++i)
	{
		cin>>k;
		vec.push_back(k);
		if(k>=max)
		{
			max = k;
		}
		if(k<=min)
		{
			min = k;
		}
	}
	cout<<max_position-min_position<<endl;
	
}
