int n=nums.size();
    int count=0;
    int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
    }
    int value = ceil(((double)sum)/n);
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==value)
        {
            continue;
        }
        count++;
    }
    return count;
