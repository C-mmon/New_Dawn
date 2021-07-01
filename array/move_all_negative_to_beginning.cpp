#include <bits/stdc++.h>
using namespace std;
//following two pointer approach
void shiftall(int arr[],int left,int right)
{
  while(left<=right)
  {
    if(arr[left]<0 && arr[right]<0)
    {
      left+=1;
    }
    else if(arr[left]>0 && arr[right]<0)
    {
      swap(arr[left],arr[right]);
      left+=1;
      right-=1;
    }
    else if(arr[left]>0 && arr[right]>0)
    {
      right-=1;
    }
    else
    {
      left+=1;
      right-=1;
    }
  }
}
int main()
{
  int arr[]={-12,11,-13,-5,6,-7,5,-3,11};
  int arr_size=sizeof(arr)/sizeof(arr[0]);
  shiftall(arr,0,arr_size-1);
  return 0;
}
