class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int column_max=matrix[0].size();
        int row_max=matrix.size();
        
        int row=0;
        int column=column_max-1;
        
        while(row<row_max && column>=0)
        {
            if(target==matrix[row][column])
            {
                return true;
            }
            else if(target>matrix[row][column])
            {
                row++;
            }
            else
            {
                column--;
            }
        }
        
        return false;
        
        
    }
};
