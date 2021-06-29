#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n=100;
	int prime[n+1]={0};//intialised to true
	//intialising a boolean array 
	for(int p=2;p*p<=n;p++)
	{
		//finding all the factors of 2 to n
		if(prime[p]==0)
		{
			for(int i=p*p;i<=n;i+=p)
			{
				prime[i]=1;
			}
		}
	}
	for(int p=2;p<=n;p++)
	{
		if(prime[p]==0)
		{
			cout<<p<<" ";
		}
	}
}

