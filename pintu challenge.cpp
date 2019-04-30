#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long l;int count;
        string str,str1,str2,str3;
        cin>>str;
        l=str.length();;
        int output=0;
        for (int i = 0; i < l; i++)
        {
           for (int  j= 1; j <= l- i; j++)
                {
                  string str1= str.substr(i, j);;
                  int k=l-j-i;
                    for(int m=l-k;m<l;m++)
                       {
                         for(int n=1;n<=l-m;n++)
                            {
                              string str2=str.substr(m,n);
                              str3=str1+str2;
                              count=0;
                              for(int x=0;x<=str3.length()/2;x++)
                                {
                                   if(str3[x]!=str3[str3.length()-1-x])
                                  {
                                    count++;
                                    break;
                                  }
                                }
                               if(count==0)
                                 output++;
             }
        }
        str1="";str2="";str3="";
        }
        }
        cout<<output<<endl;
	
	return 0;
}