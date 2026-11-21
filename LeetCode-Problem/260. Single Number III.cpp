#include<bits/stdc++.h>
using namespace std;
// this code is not parfect 
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        map<int,int> count;
        for(auto val : nums)
        {
            count[val]++;
        }
        for(auto [val,cnt] : count)
        {
            if(cnt == 1)
            {
                ans.push_back(val);
            }
        }
        return ans;
    }
};
// this is parefect
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int XOR = 0;

        // Step 1: XOR all elements
        for (int num : nums) {
            XOR ^= num;
        }

        // Step 2: Find the rightmost set bit
  long long bit = (long long)XOR & -(long long)XOR;

        int a = 0, b = 0;

        // Step 3: Divide numbers into two groups
        for (int num : nums) {
            if (num & bit) {
                a ^= num;
            } else {
                b ^= num;
            }
        }

        return {a, b};
    }
};