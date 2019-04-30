#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    long long int n;
    cin >> n;
    char str[1000000];
    for(int i = 0; i<n; i++)
    {
        cin >> str[i];
    }
    long long int count = 0;
    for(long long int i = 0; i<n
    ; i++)
    {
        cout << str[i];
        if(str[i] == 'c' && str[i+1] == 'o' && str[i+2] == 'd' && str[i+3] == 'e' && str[i+4] == ' ' && str[i+5] == 'o' && str[i+6] == 'u' && str[i+7] == 't')
        {   
            count++;
        }
    }
    cout << count << endl;
    return 0;
}