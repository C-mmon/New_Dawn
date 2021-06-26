#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
      string str;
      bool ans=true;
      cin>>str;
      if(str.length()>3)
      {
        if(str[0]=='<' && str[1]=='/' && str[str.length()-1]=='>')
        {
          for(int i=2;i<str.length()-1;i++)
          {
            if(islower(str[i]) || isdigit(str[i]))
            {

              continue;
            }

            else
            {
              ans=false;
              break;
            }
          }
        }
        else
        {
          ans=false;
        }
      }
      else
      {
        ans=false;
      }
    if(ans==false)
    {
      cout<<"Error"<<endl;

    }
    else
    {
      cout<<"Success"<<endl;
    }
  }

	return 0;
}
