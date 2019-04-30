#include<vector>
#include<bits/stdc++.h>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
	int T, rem= 0;
	cin>>T;
	while(T--)
	{
		rem++;
		int R, C;
		cin>>R>>C;
		int arr[R][C]{};
		pair<int, int> p;
		int x = 0, y = 0;
		set<pair<int, int> > s;
		p.first = 0;
		p.second = 0;
		arr[0][0] = 1;
		s.insert(p);
		
		for(int i=0; i<R*C; i++)
		{
			for(int m = 0; m<R; m++)
			{
				for(int n =0; n<C; n++)
				{
					if(m != x && n != y && ((m-n)!=(x-y)) && arr[m][n] != 1 && ((m+n) != (x+y)))
					{
						arr[m][n] = 1;
						x = m; y = n;
						p.first = m;
						p.second = n;
						s.insert(p);
						cout<<"Inserted node is :"<<m<<n<<endl;
					}
				}
			}
		}		
		if(s.size() == R*C)
		{
			cout<<"CASE #"<<rem<<": POSSIBLE";
		}
		else
		{
			cout<<"CASE #"<<rem<<": IMPOSSIBLE";
		}
	}
}
