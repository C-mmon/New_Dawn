class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) 
    {
        long int res=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            res+=max(nums[i]-nums[i-1],0);
            
        }
        return res;
    }
};
