
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            
            int k=i;
            int count=0;
            while(nums[k]>=0) //if less than 0, that means we have arrived again where we started
            {
                int temp=nums[k];
                nums[k]=-1;
                k=temp;
                count++;
            }
            ans=max(ans,count);
        }
        
        return ans;
        
