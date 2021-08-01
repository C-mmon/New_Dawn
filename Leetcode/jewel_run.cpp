class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        int res=0;
        unordered_set <char> cat(jewels.begin(),jewels.end());
        for(auto const& w: stones)
        {
            if(cat.count(w))
            {
                res++;
            }
        }
        return res;
        
    }
};
