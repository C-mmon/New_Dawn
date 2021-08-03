    int sum=0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i][i];
    }
    for(int i=arr.size()-1;i>=0;i--)
    {
        sum-=arr[(arr.size()-1)-i][i];
    }
    return abs(sum);
