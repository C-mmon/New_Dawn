class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) 
    {
        if(s.length()<10)
        {
            return {};
        }
        unordered_map <string,int> store;
        vector <string> repeated;

        for(int i=0;i<s.length()-9;i++)
        {
            store[s.substr(i,10)]++;
        }
        for(auto const& i: store)
        {
            if(i.second>1)
            {
            repeated.push_back(i.first);
            }
        }
     return repeated; 
      }
};
