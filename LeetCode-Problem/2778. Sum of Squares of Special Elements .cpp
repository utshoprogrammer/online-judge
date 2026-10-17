#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {       
        int ans = 0;
        int n = nums.size();
        nums.push_back(0);
        for(int i = 0;i < n;i++)
        {
            if(n % (i+1) == 0)
                ans += (nums[i]*nums[i]);
        }
        return ans;
    }
};

int main()
{
    
    return 0;
}