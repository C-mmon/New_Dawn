class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        //base condition
        if(nums.size()<3)
        {
            return 0;
            
        }
        
        sort(nums.begin(),nums.end());
        
        int closest=nums[0]+nums[1]+nums[2];

        //nums.size()-2 becausing we are working with three variable
        for(int first=0;first<nums.size()-2;first++)
        {
            
            int second=first+1;
            
            int third=nums.size()-1;
            
            //two pointer
            while(second<third)
            {
                int currsum=nums[first]+nums[second]+nums[third];
                
                //base case
                if(currsum==target)
                {
                    return target;
                }
                //important case
                if(abs(target-currsum)<abs(target-closest))
                {
                    closest=currsum;
                }
                //Reduce the currsum by decrementing third 
                if(currsum>target)
                {
                    third--;   
                }
                else
                {
                    second++;
                }    
                
            }
            

        }
        
        
        
        return closest;
        
    }
};
