//PRoblem- 4 Arrays RAINBOWA
#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T!=0)
	{
		T--;
		int N, A[100], k = 1, flag = true;
		cin>>N;
		for(int i=0; i<N; ++i)
		{
			cin>>A[i];
		}
		if(A[0] == 1 && A[N-1] == 1)
		{
			for(int j=0; j<N; ++j)
			{
				for(int k=N-1; k>0; k--)
				{
					if(k!=j)
					{
						if(A[j] == A[k])
						{
							continue;
						}
						else
						{
							flag = false;
						}
					}
				}
			}
		}	
		else
		{
			flag = false;
		}
		cout<<(flag?"yes":"no")<<endl;
	}
}
