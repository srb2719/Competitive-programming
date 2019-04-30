#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void checkPalindrome();
int rev = 0;
int main()
{
	int num;
	cin>>num;
	int digit, temp = num;
	do
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	}while(num != 0);
	
return rev;

}

