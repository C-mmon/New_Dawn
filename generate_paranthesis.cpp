class Solution {
public:
    vector<string> ans;
    vector<string> generateParenthesis(int n) 
    {
        recursion_call(0,0,n,"");
        return ans;
        
    }
    void recursion_call(int close,int open, int max, string t)
    {
        if(t.length()==2*max)
        {
            ans.push_back(t);
            return ;
        }
        if(open<max)
        {
            recursion_call(close,open+1,max,t+"(");
        }
        
        if(open>close)
        {
            recursion_call(close+1,open,max,t+")");
        }
    }
};
