#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        sort(nums2.begin(),nums2.end());
        nums2.erase(unique(nums2.begin(),nums2.end()),nums2.end());
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
            }
        }
        return ans;
    }
};

int main()
{
    
    return 0;
}