
        vector <string> res;
        map<string,int> ans;
        for(int i=0;i<list1.size();i++)
        {
            ans[list1[i]]=i;
        }
        int min=INT_MAX;
        for(int i=0;i<list2.size();i++)
        {
            if(ans.count(list2[i])!=0)
            {
                if(ans[list2[i]]+i<min)
                {
                    min=ans[list2[i]]+i;
                    
                    
                    res.clear();
                    
                    
                    res.push_back(list2[i]);
                }
                else if(ans[list2[i]] + i == min)
                {
                    res.push_back(list2[i]);
                }
                
            }
               
        }
               return res;
