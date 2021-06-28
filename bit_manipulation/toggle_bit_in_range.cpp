//25 11001
// toggle range between 2 to 4
// 10111
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n;
  int l,r;
  cin>>n>>l>>r;
  int mask=1;
  int val;
  int i=0;
  int power=0;
  while(i<l)
  {
    if(n & mask)
    { 
      val+=pow(2,power);
    }
    mask<<=1;
    power++;
    i++;
  }
  while(i<=r)
  {
    if(!(n&mask))
    {
      val+=pow(2,power);
    }
    power++;
    mask<<=1;
    i++;
  }
  while(i<=10)
  {
    if(n&mask)
    {
      val+=pow(2,power);
    }
    mask<<=1;
    i++;
  }
  return 0;
}
      
