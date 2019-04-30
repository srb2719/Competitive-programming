#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long l;int count;
        string str, string1, string2, string3;
        cin>>str;
        l=str.length();;
        int answer = 0;
        for (int i = 0; i < l; i++)
        {
           for (int  j= 1; j <= l- i; j++)
                {
                  string string1= str.substr(i, j);;
                  int k = l-j-i;
                    for(int i1=l-k;i1<l;i1++)
                       {
                         for(int i2=1; i2<=l-i1; i2++)
                            {
                              string string2=str.substr(i1, i2);
                              string3 = string1+string2;
                              count=0;
                              for(int t=0; t<=string3.length()/2; t++)
                                {
                                   if(string3[t]!=string3[string3.length()-1-t])
                                  {
                                    count++;
                                    break;
                                  }
                                }
                               if(count==0)
                                 answer ++;
             }
        }
        string1="";string2="";string3="";
        }
        }
        cout<<answer << endl;
	
	return 0;
}