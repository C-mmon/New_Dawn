
        unordered_map <string,vector<string>> mp;
        for(auto i: strs)
        {
            string t=i;
            sort(t.begin(),t.end());
            mp[t].push_back(i);
        }
        vector <vector<string> >ans;
        
        for(auto t: mp)
        {
            ans.push_back(t.second);
        }
        return ans;
        
