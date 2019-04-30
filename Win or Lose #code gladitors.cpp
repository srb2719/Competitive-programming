#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	long long int N, flag = 0, k;
		cin>>N;
	    vector<long long int> arr1;
	    vector<long long int> arr2;
	    for(int i=0; i<N; i++)
	    {
	        cin>>k;
	        arr1.push_back(k);
	    }
	    
	    for(int i=0; i<N; i++)
	    {
	        cin>>k;
	        arr2.push_back(k);
	    }
	
	    sort(arr1.begin(), arr1.end());
	    sort(arr2.begin(), arr2.end());
	    
	    for(int i = 0; i<N; i++)
	    {
	    	if(arr2[i]>=arr1[i])
	    	{
	    		continue;
			}
			else
			{
				flag = 1;
				break;
			}
		}
		
		if(flag == 1)
		{
			cout<<"LOSE"<<endl;
		}
		else
		{
			cout<<"WIN"<<endl;
		}
	}

}
