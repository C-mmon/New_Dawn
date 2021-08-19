//max subarray with k size
#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector <int> nums {1,3,4,5,6,78,100};
  int k=3;//size of the window is k
  int store=nums[0]+nums[1]+nums[2];
  int temp=store;
  for(int i=1;i<=nums.size()-k;i++)
  {
    temp-=nums[i-1];
    temp+=nums[i+2];
    if(temp>store)
    {
      store=temp;
    }
  }
  cout<<store<<endl;
  return 0;
}
