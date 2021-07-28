class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& num) {
        
    
    if(num.size()<3)
    {
        return {};
    }
    vector<vector<int>> res;
    sort(num.begin(), num.end());

    for (int first = 0; first < num.size(); first++) 
    {
        
        int second = first + 1;
        int third = num.size() - 1;

        while (second < third) 
        {   
            int sum = num[first] +num[second]+ num[third];
            if (sum < 0)
            {
                second++;
            }
            else if (sum> 0)
            {
                third--;
            }
            else 
            {
                vector<int> triplet = {num[first], num[second], num[third]};
                res.push_back(triplet);
                
                while (second < third && num[second] == triplet[1]) 
                {
                    second++;
                }

                // Processing duplicates of Number 3
                // Rolling the back pointer to the next different number backwards
                while (second < third && num[third] == triplet[2])
                {
                    third--;
                }
            }
            
        }

        // Processing duplicates of Number 1
        while (first + 1 < num.size() && num[first + 1] == num[first]) 
            first++;

    }
    
    return res;
 
        
    }
};
