class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector <int>> r (numRows);
        for(int i=0;i<numRows;i++)
        {
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
            for(int k=1;k<i;k++)
            {
                r[i][k]=r[i-1][k-1]+r[i-1][k];
            }
        }
        return r;
        
    }
};
