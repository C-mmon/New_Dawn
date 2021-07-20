class Solution {
public:
    vector <int> nums;
    Solution(vector<int>& nums) 
    {
        this->nums=nums;
        
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() 
    {
        
        return nums;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() 
    {        
        vector <int> shuffled(nums);
        int n=shuffled.size();
        int left_size=n;
        for(int i=n-1;i>=0;i--)
        {
            int j=rand()%left_size;
            swap(shuffled[i],shuffled[j]);
            left_size--;
        }
        return shuffled;
        
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
