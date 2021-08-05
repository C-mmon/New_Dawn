#include <stdio.h>

int find_pivot(vector <int> arr)
{
  for(int i=0;i<arr.size()-1;i++)
  {
    if(arr[i]>arr[i+1])
    {
      return i+1;
    }
  }
}
void find_pair(vector <int> arr, int sum)
{
  int pivot=find_pivot(arr);
  int low= pivot%n; //we are not assured after
  int high=pivot-1; //we are rest assured element can exist before the pivot
  while(low!=high)
  {
    if(arr[low]+arr[high]==sum)
    {
      cout<<"found"<<endl;
    }
    else if(arr[low]+arr[high]<sum)
    {
      low=(low+1)%n;
    }
    else
    {
      high=(high-1+n)%n;
    }
  }
  cout<<"sum not found"<<endl;
}
