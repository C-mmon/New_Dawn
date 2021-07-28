class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) 
    {
        //concept of set, pair, iterating string in vector 
        
        set <pair<string,string>> store;
        for(const auto& w: words)
        {
            pair<string,string> p;
            for(int j=0;j<w.length();j++)
            {   
                if(j%2)
                {
                    p.first+=w[j];
                    
                }
                else
                {
                    p.second+=w[j];
                }
            }
            sort(p.first.begin(),p.first.end());
            sort(p.second.begin(),p.second.end());
            store.insert(p);
        }
        return store.size();
    }
};
