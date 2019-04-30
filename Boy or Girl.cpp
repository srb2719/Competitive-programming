#include<bits/stdc++.h>
#include<set>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
	set<char> s;
	char k[100];
	cin>>k;
	for(int i=0; i<strlen(k); i++)
	{
		s.insert(k[i]);
	}
	
	int count = s.size();
	if(count % 2 == 0)
	{
		cout<<"CHAT WITH HER!";
	}
	
	else 
	{
		cout<<"IGNORE HIM!";
	}
}
