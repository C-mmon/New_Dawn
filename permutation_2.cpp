class Solution {
public:
    
    vector <vector <int>> ans;
    set <vector <int>> s;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        if(nums.size()==0)
        {
            return {};
        }
        sort(nums.begin(),nums.end());
        vector <bool> visited(nums.size());
        
        rec(nums,0,{},visited);
         return ans;   
    }
    void rec(vector <int> & nums,int i,vector <int> temp, vector <bool> visited)
    {
        if(temp.size()==nums.size())
        {
            if(s.find(temp)!=s.end())
            {
                return ;
            }
            ans.push_back(temp);
            s.insert(temp;)
            return ;
        }
        
        
        for(int i=0;i<nums.size();i++)
        {
            
            if(visited[i]==false)
            {
                visited[i]=true;
            temp.push_back(nums[i]);
            rec(nums,i+1,temp,visited);
            temp.pop_back();
                visited[i]=false;
                
            }
            
        }
    }
};
