class Solution {
public:
    vector <vector <int>> ans;
    vector<vector<int>> permute(vector<int>& nums) 
    {
        if(nums.size()==0)
        {
            return {};
        }
        rec(nums,0,{});
         return ans;   
    }
    void rec(vector <int> & nums,int i,vector <int> temp)
    {
        if(temp.size()==nums.size())
        {
            ans.push_back(temp);
            return ;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(!temp.empty( ) && find(temp.begin(),temp.end(),nums[i])!=temp.end())
            {
                continue;
            }
            temp.push_back(nums[i]);
            rec(nums,i+1,temp);
            temp.pop_back();
        }
    }
};
