#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n=100;
	bool prime[n+1];//intialised to true
	//intialising a boolean array 
	    memset(prime, true, sizeof(prime));
	for(int p=2;p*p<=n;p++)
	{
		//finding all the factors of 2 to n
		if(prime[p]==true)
		{
			for(int i=p*p;i<=n;i+=p)
			{
				prime[i]=false;
			}
		}
	}
	for(int p=2;p<=n;p++)
	{
		if(prime[p])
		{
			cout<<p<<" ";
		}
	}
}

