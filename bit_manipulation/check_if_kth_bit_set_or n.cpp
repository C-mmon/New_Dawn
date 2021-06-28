#include <stdio.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int mask=1;
  mask<<=k;
    if(n&mask)
    {
      cout<<"True"<<endl;
    }
  else
  {
    cout<<"False"<<endl;
  }
}
