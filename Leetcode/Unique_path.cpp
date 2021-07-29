class Solution {
public:
    int uniquePaths(int m, int n) 
    {
        if(m==1 || n==1)
        {
            return 1;
        }
        m--;
        n--;
        if(m<n)
        {
            swap(m,n);
        }
        long res=1;
        for(int j=1,i=m+1;i<=m+n;i++,j++)
        {
            res*=i;
            res/=j;
        }
        return res;
        
    }
};
