#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mis_num = 0;
        for(int i = 0;i < nums.size();i++)
        {
            if(nums[i] == mis_num )
            {
                mis_num++;
            }
            else break;
        }
        return mis_num;
    }
};