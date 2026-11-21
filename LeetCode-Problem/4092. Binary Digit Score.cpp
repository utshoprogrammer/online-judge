#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calculateScore(int a, int b) {
        string s;
        while(a > 0)
        {
            s += (a % 2) ? '1': '0';
            a/=2;
        }
        string t;
        while(b > 0)
        {
            t += (b % 2) ? '1': '0';
            b/=2;
        }
        int count = 0;
        for(int i = 0;i < s.size();i++)
        {
            if(s[i] == '1')
            {
                count++;
            }
        }
        int count2 = 0;
        for(int i = 0;i < t.size();i++)
        {
            if(t[i] == '1')
            {
                count2++;
            }
        }
        if(count >= count2)
        {
            return (count * count2);
        }
        else return (count2/count);
    }
};
