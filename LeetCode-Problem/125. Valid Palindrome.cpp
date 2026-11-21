#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto c : s)
        {
            if((c <= 'z' && c >= 'a') || c <= 'Z' && c >= 'A')
            {
                str += c;
            }
            else if(c >= '0' && c <= '9')
            {
                str += c;
            }
        }
        transform(str.begin(),str.end(),str.begin(),::tolower);
        string r = str;
        reverse(r.begin(),r.end());
        if(str == r)
            return true;
        else return false;
    }
};