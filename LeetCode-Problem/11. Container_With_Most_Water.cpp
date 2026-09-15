#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = INT_MIN;

        int i = 0;
        int j = height.size()-1;

        while(i < j)
        {
            if(height[i] < height[j])
            {
                int water = height[i]*(j-i);
                max_water = max(water,max_water);
                i++;
            }
            else if(height[i] > height[j])
            {
                int water2 = height[j]*(j-i);
                max_water = max(water2,max_water);
                j--;
            }
            else if(height[i] == height[j])
            {
                int water3 = height[i]*(j-i);
                max_water = max(water3,max_water);
                i++;
                j--;
            }
        }
        return max_water;
        
    }
};