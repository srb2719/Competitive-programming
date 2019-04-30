#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int checkPalindrome(int num)
{
	int digit, temp = num;
	int rev = 0;
	do
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	}while(num != 0);
	
	return rev;
}

int main()
{
	int T;
	cin>>T;
	while(T != 0)
	{
		T--;
		int k;
		bool f = true;
		cin>>k;
		k = k+1;
		int a = checkPalindrome(k);
		cout<<a;
		while(f)
			{
				if(a == k)
					{
						cout<<a<<"\n";
						f = false;
						break;
					}
				else
					{
						k = k+1;
						cout<<"called";
						checkPalindrome(k);
						f = true;
					}
			}
	}
}
