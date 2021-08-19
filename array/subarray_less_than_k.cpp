   
        //sliding window TLE
        int end=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            end=i;
            int prod=nums[i];
            while(true)
            {
                if(prod<k && end!=nums.size()-1)
                {
                    end++;
                    prod=prod*nums[end];
                    count++;
                    if(prod<k && end==nums.size()-1)
                    {
                        count++;
                    }
                    
                }
                else
                {
                    break;
                }

            }
        }
        if(nums[nums.size()-1]<k)
        {
            count++;
        }
        return count;
        
    }
