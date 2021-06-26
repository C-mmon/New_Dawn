#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
          if(str[0]>'1')
            {
                cout<<"1"+str<<endl;
            }
            else
            {
                cout<<"10"+str.substr(1,str.length()-1)<<endl;
            }
        }

	return 0;
}
