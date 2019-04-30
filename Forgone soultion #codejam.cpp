#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int T;
	cin>>T;
	int a = 0;
	while(T--)
	{
		long long int N, A, B;
		cin>>N;
		vector<int> arr, arr2, arr3;
		int count = 0;
		long long int temp, k;
		temp  =  N;
		while (temp != 0)
		{
			k = temp % 10;
			arr.push_back(k);
			temp = temp / 10;
			count++;
		}
		vector<int>::iterator it;
		vector<int>::iterator it2;
		for(it = arr.begin(); it!=arr.end() ; ++it)
		{
			if(*it == 4)
			{
				arr2.push_back(3);
			}
			else
			{
				arr2.push_back(*it);
			}
		}
		temp = pow(10, arr2.size()-1);
		long long int z = arr2.size()-1;
		k = 0;
		while(temp!=0)
		{
			k = k + temp * arr2[z];
			temp = temp/10;
			z--;
		}
		A = k;
		B = N - k;
		a = a + 1;
		cout<<"Case #"<<a<<": "<<A<<" "<<B<<endl;
	}
}
