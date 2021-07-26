class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        int n=triangle[0].size();
        vector<vector<int> > dp=triangle;
        int i=dp.size()-1;
        for(int i=0;i<dp.size();i++)
        {
            for(int j=0;j<dp[i].size();j++)
            {
                dp[i][j]=0;

            }
        }
        i=dp.size()-1;
        while(i>=0)
        {
            for(int j=0;j<dp[i].size();j++)
            {
                if(i==triangle.size()-1)
                {
                    dp[i][j]=triangle[i][j];
                }
                else
                {
                    dp[i][j]=triangle[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
                }
            }
            i--;
        }
        return dp[0][0];
    }
};
