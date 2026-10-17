#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int> ans; 
        map<int,int> count;
        for(int i = 0;i < nums.size();i++)
        {
            count[nums[i]]++;
        }
        for(auto [val,cnt] : count)
        {
            if(cnt > 1)
            {
                ans.push_back(val);
            }
        }
        return ans;
    }
};

int main()
{
    
    return 0;
}