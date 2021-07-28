class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        vector <int> store (500,0);
        for(int i=0;i<arr.size();i++)
        {
            store[arr[i]]++;
        }
        int max=INT_MIN;
        for(int i=0;i<store.size();i++)
        {
            if(i==store[i] && store[i]>=max )
            {
                max=store[i];
            }
        }
        if(max==0)
        {
            return -1;
        }
        else
        {
            return max;

        }
        
        
    }
};
