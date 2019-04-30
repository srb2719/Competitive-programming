#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int N, i=0, count = 0, first_count = 0, last_count = 0, temp = 0, new_first;
		cin>>N;
		string str, sub; char c;
		cin>>str;
		cin>>c;
		for(i=0; i<N; i++)
		{
			if(str[i] == c)
			{
				first_count = i;
				last_count = N-i;
				count = count + last_count; //so that the last term not gets added twice
				if(temp>0)
				{
					new_first = N - temp - last_count - 1;
					count = count + (last_count*new_first);
				}
				else
				{
					count = count + (last_count*first_count);
				}
			}
			temp = first_count;
		}
		cout<<count<<endl;
	}
	return 0;
}
