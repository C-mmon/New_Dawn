int numIslands(vector<vector<char>>& grid) 
    {
        if(grid.size()==0)
        {
            return 0;
        }
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(grid,i,j);
                    count+=1;
                }
            }
        }
        return count;
        
        
    }
    void dfs(vector<vector<char>> & grid,int i,int j)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]!='1')
        {
            return ;
        }
        grid[i][j]='#';
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
