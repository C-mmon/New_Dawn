#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x;
        cin>>a>>b>>x;
        if((b-a)%x==0)
        {
            cout<<(b-a)/x<<endl;
        }
        else
        {
            cout<<(b-a)/x +1<<endl;
            
        }
    }
        return 0;
}
