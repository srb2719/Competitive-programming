#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int N, position, j=0, ch, count = 0;
		cin>>N;
		string str, sub; char c;
		cin>>str;
		cin>>c;
		for(position = 0; position<N; position++)
		{
			for(j = 1; j<=N-position; j++)
			{
				sub = str.substr(position, j);
				for(ch=0; ch<sub.length(); ch++)
				{
					if(sub[ch] == c)
					{
						count++;
						break;
					}
				}
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
