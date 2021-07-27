#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a="cbc";
  string b="aba";
  if(a.length()!=b.length())
  {
    cout<<"Not Possible"<<endl;
  }
  else
  {
    char ch_1;
    char ch_2;
    int count;

    for(int i=0;i<a.length();i++)
    {

      if(a[i]==b[i])
      {
        continue;
      }
      else if(count==1 && a[i]!=b[i])
      {
        if(ch_1==a[i] && ch_2==b[i])
        {
          count=0;
        }

      }
      else
      {
        ch_1=a[i];
        ch_2=b[i];
        count=1;
      }
    }
    if(count==1)
    {
      cout<<"Not Possible"<<endl;
    }
    else
    {
      cout<<"Possible"<<endl;
    }
  }
}
