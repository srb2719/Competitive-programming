#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
	long long int N, Q, k, z;
	cin>>N>>Q;
	vector<int> L;
	vector<int> R;
	vector<int> answer;
	
	vector<long long int> arrA;
	for(int i=0; i<N; i++)
	{
		cin>>k;
		arrA.push_back(k);
	}
	
	vector<long long int> arrB;
	for(int j=0; j<N; j++)
	{
		cin>>k;
		arrB.push_back(k);
	}
	int ans = 0;
	for(int i=0; i<Q; i++)
	{
		cin>>k>>z;
		for(int j = k-1; j <= z-1; j++)
		{
			ans = ans + arrA[j]*arrB[j];
		}
		cout<<ans<<endl;
		ans = 0;
	}
}




