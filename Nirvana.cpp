#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
	long long int n, temp, i=0, j;
	cin>>n;
	temp = n;
	int rem=1;
	std::vector<long long int> arr(n);
	while(temp!=0)
	{
        rem = temp%10;
        arr[i] = rem;
        temp = temp/10;
        i++;
    }
    for(j=0; j<i; j++)
    {
    	cout<<arr[j]<<"\t";
	}
}
