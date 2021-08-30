class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        if(nums.size()==0)
        {
            return {};
        }
        vector <string> ans;
        int start=nums[0];
        int end=-1;
        bool end_test=false;
        string a="";
        for(int i=1;i<nums.size();i++)
        {
            
            if(nums[i-1]+1==nums[i])
            {
                end=nums[i];
                end_test=true;
                
            }
            else if(end_test)
            {
                a=to_string(start)+"->"+to_string(end);
                ans.push_back(a);
                start=nums[i];
                end_test=false;
            }
            else if(!end_test)
            {
                ans.push_back(to_string(start));
                    start=nums[i];
                
            }
            
        }
        if(!end_test)
        {
            ans.push_back(to_string(start));
            
        }
        else
        {
                            a=to_string(start)+"->"+to_string(end);
                ans.push_back(a);

        }
        return ans;
        
    }
};
