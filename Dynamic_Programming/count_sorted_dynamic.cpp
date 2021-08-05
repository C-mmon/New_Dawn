
        //dynamic programnig
        vector <char> vowel {'a','e','i','o','u'};
        vector<vector<int>>dp(n + 1, vector<int>(6));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<6;j++)
            {
                if(i==1)
                {
                    dp[i][j]=dp[i][j-1]+1;
                }
                else
                {
                 
                    dp[i][j]=dp[i][j-1]+dp[i-1][j];
                }
            }
        }
        return dp[n][5];
        
