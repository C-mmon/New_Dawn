vector<string> cavityMap(vector<string> grid) 
{
    int n=grid.size();
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    {
        if( (i>=1)&&(i<n-1) && (j>=1)&&(j<n-1) ) //border check
        {
         if( (grid[i][j] > grid[i-1][j]) && (grid[i][j] > grid[i][j+1])      
         && (grid[i][j] > grid[i+1][j]) && (grid[i][j] > grid[i][j-1]) )
            {
                grid[i][j]='X';
            }
        }
    }
    }
    return grid;

}
