#include <bits/stdc++.h>
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>::iterator lower, upper;
        lower = lower_bound(nums.begin(), nums.end(), target);
        upper=upper_bound(nums.begin(), nums.end(), target);

        if(lower==upper)
        {
            return {-1,-1};
            
        }
        else
        {
        vector <int> ans;
        ans.push_back(lower - nums.begin() );
        ans.push_back(upper-nums.begin()-1);
                    return ans;

        }
        
        
    }
};
