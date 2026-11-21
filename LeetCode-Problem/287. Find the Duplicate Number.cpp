#include<bits/stdc++.h>
using namespace std;
// this code is not parfect
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = 1;i < nums.size();i++)
        {
            if(nums[i] == nums[i-1])
            {
                return nums[i];
            }
        }
        return -1;
    }
};

// this code is parfect :-

/* Using pigeon hole, we prove that there will at least 
one repeated number
*/
class Solution 
{
public:
    int findDuplicate(vector<int>& nums) 
    {
        int slow = nums[0], fast = nums[0];

        while (true)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];

            if (slow == fast)
                break;
        }

        slow = nums[0];

        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};