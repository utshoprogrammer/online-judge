#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<long long int,int> mp;
        vector<int> ans;
        for(int i = 0;i < (int)numbers.size();i++)
        {
            long long int find_val = target - numbers[i];
            auto it = mp.find(find_val);
            if(it != mp.end())
            {
                ans.push_back(it->second+1);
                ans.push_back(i+1);
                break;
            }
            mp[numbers[i]] = i;
        }
        return ans;
    }
};
