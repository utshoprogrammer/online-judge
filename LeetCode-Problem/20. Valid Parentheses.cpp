#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto c : s)
        {
            if(c == '(')
            {
                st.push(')');
            }
            else if(c == '{')
            {
                st.push('}');
            }
            else if(c == '[')
            {
                st.push(']');
            }
            else{
                if(st.empty()) return false;
                if(st.top() != c)
                {
                    return false;
                }
                else{
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};