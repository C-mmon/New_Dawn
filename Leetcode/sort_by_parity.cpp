
        //two pointer
        int start=0;
        int end=nums.size()-1;
        while(start<end)
        {
            //both odd 
            if((nums[start]&1) && (nums[end]&1))
            {
                end--;
            }
            //even and odd
            else if(!(nums[start]&1) && (nums[end]&1))
            {
                start++;
                end--;
            }
            //odd and even
            else if((nums[start]&1) && !(nums[end]&1))
            {
                swap(nums[start],nums[end]);
            }
            else //both even
            {
                start++;
            }
            
        }
        return nums;
        
