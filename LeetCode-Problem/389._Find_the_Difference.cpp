#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        multiset<char> st;
        for(int i = 0;i < s.size();i++)
        {
            st.insert(s[i]);
        }
        char ans = ' ';
        for(int i = 0;i < t.size();i++)
        {
            auto it = st.find(t[i]);
            if(it == st.end())
            {
                ans = t[i];
            }
            else{
                st.erase(it);
            }
        }
        return ans;
    }
};
int main()
{
    
    return 0;
}