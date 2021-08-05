
        int max_sum=0;
        int min_sum=0;
        int res=0;
        for(auto n:nums)
        {
            max_sum=max(0,n+max_sum);
            min_sum=min(0,n+min_sum);
            res=max({res,max_sum,abs(min_sum)});
        }
        return res;
