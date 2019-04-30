#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	
	long z;int count;
  string string, string1, string2 , string3;
  cin >> string;
  z = string.length();
  long long int answer=0;
  for (int i = 0; i < z; i++)
  {
    for (int  j= 1; j <= z- i; j++) //for the original subset of string
          {
              string1 = string.substr(i, j);
              int k = z-j-i;
              for(int i1=z-k; i1<z; i1++)
                  {
                    for(int i2 = 1; i2 <= z-i1; i2++) //subset of subset
                      {
                        string3 = string1 + string2;
                        string2 = string.substr(i1, i2);
                        count = 0;
                        for(int t2 = 0; t2 <= string3.length()/2 ; t2++)
                          {
                              if(string3[t2] != string3[string3.length()-1-t2])
                            {
                              count++;
                              break;
                            }
                          }
                          if(count == 0)
                            answer++;
                      }
                  }
        string1 = "";
        string2 = "";
        string3 = "";
         }
    }
        cout << answer<< endl;
	
	return 0;
}