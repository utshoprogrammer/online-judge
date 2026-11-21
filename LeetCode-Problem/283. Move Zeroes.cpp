#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;
        for(int fast = 0;fast < nums.size();fast++)
        {
            if(nums[fast] != 0)
            {
                swap(nums[fast],nums[slow]);
                slow++;
            }
        }

        // int i = 0,j = 0;
        // while(j < nums.size())
        // {
        //     if(nums[j] != 0)
        //     {
        //         swap(nums[i],nums[j]);
        //         i++;
        //     }
        //     j++;
        // }
    }
};