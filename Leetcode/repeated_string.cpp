class Solution {
public:
    int repeatedStringMatch(string A, string B) 
    {
        for (auto i = 0, j = 0; i < A.size(); ++i) 
        {
        for (j = 0; j < B.size();)
            {
                if(A[(i+j)%A.size()]!=B[j])
                {
                    break;
                }
                ++j;
                if (j == B.size()) 
                {
                    return (i + j - 1) / A.size() + 1;
                }
            }
    }
    return -1;
    }
};
