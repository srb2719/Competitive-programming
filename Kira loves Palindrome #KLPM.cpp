#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

bool isSSubstring(string s1, string s2) 
{ 
    int M = s1.length(); 
    int N = s2.length(); 

    for (int i = 0; i <= N - M; i++) { 
        int j; 
        for (j = 0; j < M; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
  
        if (j == M) 
            return true; 
    } 
  
    return false; 
} 


bool check_a(string findd, string word1, string word2)
{
    int findd_len = findd.length();
    int word1_len = word1.length();
    int word2_len = word2.length();
    int flag = 0;
    if(findd_len <= word1_len)
            {
                if(isSSubstring(findd, word1))
                {
                    flag = 1;
                    return true;
                }
            }
    if(flag != 1 && findd_len <= word2_len)
            {
                if(isSSubstring(findd, word2))
                {
                    return true;
                }
            }
        return false;
}

bool allCharactersSame(string s) 
{ 
    int n = s.length(); 
    for (int i = 1; i < n; i++) 
        if (s[i] != s[0]) 
            return false; 
  
    return true; 
} 

int main()
{
    string s;
    cin>>s;
    string temp2;
    string rare;
    int temp_len;
    int count = 0;
    string temp;
    string rem1, rem2;
    int rare_length;
    int n = s.length();
    int rem1_length, rem2_length;
    if(allCharactersSame(s) && n == 2)
    {
        cout << (s.length()) - 1;
    }
    else
    {
        for(int i = 0;  i<n; i++) //pointer to each element in string
        {
            for(int j = 0; j<n -i && j != n-1; j++)
            {
                bool answer = true;
                rare = s;
                temp = s.substr(i, j+1);
                reverse(temp.begin(), temp.end()); //ye search karna hai 
                temp_len = temp.length();
                rare.erase(i, temp_len);
                rare_length = rare.length();
                rem1 = rare.substr(0, i);
                rem2 = rare.substr(i, rare_length);
                rem1_length = rem1.length();
                rem2_length = rem2.length();
                while(answer)
                {
                    //cout<<"Temp : "<< temp << " rem1 : "<< rem1 <<" rem2 : "<< rem2 << " "<<endl;
                    if(check_a(temp, rem1, rem2))
                    {
                        count++;
                        //cout<< "count " << count << " "<<endl;
                        answer = false;
                        break;
                    }
                    else
                    {
                        if(temp.length() != 1)
                        {
                            temp.pop_back();
                        // cout << "new temp : " << temp;
                        }
                        else
                        {
                            answer = false;
                            break;
                        }
                        
                    }
                // cout<< "count " << count << " "<<endl;
                }
            }
        }
        cout<< count << endl;
    }

}