class Solution {
public:
     vector <vector <int>> ans;
    set <vector <int>> s;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        
        vector <int> temp;
        sub(nums,0,temp);
        return ans;
        
    }
    void sub(vector <int> &nums, int i, vector <int> temp)
    {
        //
        if(i==nums.size())
        {
            if(s.find(temp)!=s.end())
            {
                return ;
            }
            ans.push_back(temp);
            s.insert(temp);
            return ;
        }
        sub(nums,i+1,temp);
        temp.push_back(nums[i]);
        sub(nums,i+1,temp);
            
    }
};
