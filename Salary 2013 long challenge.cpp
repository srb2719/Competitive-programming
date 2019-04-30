//PRoblem - 3 Salary
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T!=0)
	{
		int N, w, mini =10000, sum = 0;
		T--;
		cin>>N;
		for(int i=0; i<N; i++)
		{
			cin>>w;
			
			sum = sum+w;
			mini = min(w, mini);
		}
		int ans = sum-N*mini;
		cout<<ans<<endl;
		
	}
}
