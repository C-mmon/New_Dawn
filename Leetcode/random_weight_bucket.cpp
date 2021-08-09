#define pb push_back
class Solution {
public:
    vector <int> v;
    
    Solution(vector<int>& w)   
    {
        // 1 2 3 4
        //cf 1 3 5 9 
        //1 lies in the range of 0 to 1 
        //2 lies in the range 1 to 3 hen
        //input the first element 
        //1
        //1+2 push 3
        //v 1 3 so always we have to fetch the last element that is back
        v.pb(w[0]);
        for(int i=1;i<w.size();i++)
        {
            v.pb(v.back()+w[i]);
        }
        
    }
    
    int pickIndex() 
    {
        int rand_weight=rand()%(v.back());
        //making a random weight 
        //upper bound 
        return upper_bound(v.begin(),v.end(),rand_weight)-v.begin();
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
