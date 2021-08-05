int countincreasing(vector <int> n, int n)
{
  int count=0;
  for(int i=0;i<n.size();i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[j]>arr[j-1])
      {
        count++;
        
      }
      else
      {
        break;
      }
    }
    
  }
  return count;
}
