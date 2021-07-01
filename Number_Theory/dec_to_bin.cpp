#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
int main()
{
  int n=17,count=0,rem;
  ull b=0;
  while(n!=0)
  {
    rem=n%2; //Getting either 0 or 1
    b+=rem*pow(10,count); //Multiplying the 0/1 with power and storing it.
    count++;
    n=n/2;
  }
  cout<<b;
  return 0;
}
