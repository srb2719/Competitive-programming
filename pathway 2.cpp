#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


/* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int q;
    cin >> q;
    while(q--)
    {
        long long int left, right, num;
        cin >> left >> right  >> num;
        int count = 0;
        if(left <= 9)
        {
            if(right > 9)
            {
                count = 10 - left;
            }
            else
            {
                count = right -left + 1;
            }
        }
        if(right > 10)
        {
            count = count + (right - 9) / 11;
        }
        cout << count << endl;
        
    }
}