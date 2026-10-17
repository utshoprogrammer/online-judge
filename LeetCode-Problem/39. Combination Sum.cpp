#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    set<vector<int>> s;
    void getcombination(vector<int>& candidates,int indx, int target,vector<vector<int>> &ans,vector<int> &combint)
    {
        if(indx == candidates.size() || target < 0)
        {
            return;
        }
        if(target == 0)
        {
            if(s.find(combint) == s.end())
            {
                ans.push_back(combint);
                s.insert(combint);
            }
            return;
        }
        combint.push_back(candidates[indx]);
        // single
        getcombination(candidates,indx+1,target - candidates[indx],ans,combint);
        // multiple
        getcombination(candidates,indx,target - candidates[indx],ans,combint);
        combint.pop_back();
        // ex
        getcombination(candidates,indx+1,target,ans,combint);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combint;

        getcombination(candidates,0,target,ans,combint);
        
        return ans;
    }
};
int main()
{
    
    return 0;
}