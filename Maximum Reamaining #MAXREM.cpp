#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
	long long int N, k, max = 0 , max2 = 0;
	cin>>N;
	vector<long long int> a;
	set<long long int> b;
	for(long long int i=0; i<N; ++i)
	{
		cin>> k;
		b.insert(k);
	}
	set<long long int>::iterator itr;
	
	if(!b.empty())
		max = *b.rbegin();
	b.erase(max);
	if(!b.empty())
		max2 = *b.rbegin();
	cout<<max2;
		
	return 0;
}
