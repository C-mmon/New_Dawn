#include <bits/stdc++.h>
using namespace std;

int getpair(vector <int> arr, int sum)
{
  unordered_map <int,int> m;
  int twice_count=0;

  for(int i=0;i<arr.size();i++)
  {
    m[arr[i]]++;

  }
  for(int i=0;i<arr.size();i++)
  {
    twice_count+=m[sum-arr[i]];
    if(sum-arr[i]==arr[i])
    {
      twice_count--;
    }
  }
  return twice_count/2;
}
int main()
{
  vector <int> m={1,2,3,4,6,7};
  int target=10;
  cout<<getpair(m,target);
  return 0;
}
