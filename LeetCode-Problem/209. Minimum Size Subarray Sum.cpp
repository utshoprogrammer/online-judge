#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size();
        int l = 0,r = 0,sum = 0, ans = n+n;
        while(r < n)
        {
            sum += nums[r];
            while(sum >= target)
            {
                ans = min(ans,r-l+1);
                sum -= nums[l];
                l++;
            }  
            r++;
        }
        if(ans == n+n)
        {
            return 0;
        }
        else{
            return ans;
        }
    }
};