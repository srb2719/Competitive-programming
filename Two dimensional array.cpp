#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, q;
    cin>>n>>q;
    int **arr = new int*[n]();
    for(int i=0; i<n; i++)
    {
        int k;
        cin>>k;
        int *arr2 = new int[k]();
        for(int j=0; j<k; j++)
        {
            cin>>arr2[j];
        }
        arr[i] = arr2;
    }
    for(int x=0; x<q; x++)
    {
    	int q1, q2;
    	cin>>q1>>q2;
    	cout<<arr[q1][q2]<<endl;
	}
    return 0;
}

