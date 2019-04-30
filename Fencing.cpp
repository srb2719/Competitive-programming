#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
	int T;
	bool plant = true;
	cin>>T;
	while(T--)
	{
		vector <long long int>R;
		vector <long long int>C;
		long long int adj = 0, non_adj = 0;
		long long int N, M, K, r, c, i, j, k; // N -> rows, M -> columns
		cin>>N>>M>>
		K;
		int arr[N][M]{};
		for(k=0; k<K; k++)
		{
			cin>>r>>c;
			arr[r-1][c-1] = 1;
		}
		//bakchodi to find the no. of adjacent sides


		if(arr[0][0] == 1)
		{
			if(arr[0][1] == 1 || arr[1][0] == 1)
			{
				adj++;
			}
			else
			{
				non_adj++;
			}
			
		}

		if(arr[N-1][M-1] == 1)
		{
			if(arr[N-1][M-2] == 1 || arr[N-2][M-1] == 1)
			{
				adj++;
			}
			else
			{
				non_adj++;
			}
		}

		if(arr[0][M-1] == 1)
		{

			if(arr[0][M-2] == 1 || arr[1][M-1] == 1)
			{
				adj++;
			}
			else
			{
				non_adj++;
			}
			
		}

		if(arr[N-1][0] == 1)
		{
			if(arr[N-2][0] == 1 || arr[N-1][1] == 1)
			{
				adj++;
			}
			else
			{
				non_adj++;
			}
			
		}

	for(i=1; i<M-1; i++) //first row all center elements
	{
		if(arr[0][i] == 1)
		{
			if(arr[0][i+1] == 1 || arr[0][i-1] == 1 || arr[1][i] == 1)
			{
				adj++;
			}
			else
			{
				non_adj++;
			}
		}
	}

	for(i=1; i<M-1; i++) //for last row all center elements
	{
		if(arr[N-1][i] == 1)
		{
			if(arr[N-1][i+1] == 1 || arr[N-1][i-1] == 1 || arr[N-2][i] == 1)
			{
				adj++;
			}
			else
			{
				non_adj++;
			}
		}
	}

	for(i=1; i<N-1; i++) //for first column all center elements
	{
		if(arr[i][0] == 1)
		{
			if(arr[i-1][0] == 1 || arr[i+1][0] == 1 || arr[i][1] == 1)
			{
				adj++;
			}
			else
			{
				non_adj++;
			}
		}
	}

	for(i=1; i<N-1; i++) //for last column all center elements
	{
		if(arr[i][M-1] == 1)
		{
			if(arr[N-1][M-1] == 1 || arr[N-1][M-1] == 1 || arr[N-2][M-2] == 1)
			{
				adj++;
			}
			else
			{
				non_adj++;
			}
		}
	}
	
	for(i=1; i<M-1; i++)
	{
		for(j=1; j<N-1; j++)
		{
			if(arr[i][j] == 1)
			{
				if(arr[i+1][j] == 1 || arr[i-1][j] == 1 || arr[i][j+1] == 1 || arr[i][j-1] == 1)
				{
					adj++;
				}
				else
				{
					non_adj++;
				}
			}
		}
	}

	cout<<"adjYO = "<<adj<<endl;
	cout<<"non_adj = "<<non_adj<<endl;



		for(i=0; i<N; i++)
		{
			for(j=0; j<M; j++)
			{
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}


	}
	return 0;
}
