#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        multiset<int> st;
        sort(nums2.begin(),nums2.end());
        for(int i = 0;i < nums1.size();i++)
        {
            st.insert(nums1[i]);
        }
        vector<int> ans;
        for(int i = 0;i < nums2.size();i++)
        {
            auto it = st.find(nums2[i]);
            if(it != st.end())
            {
                ans.push_back(*it);
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