#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *A=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		A[i]=i+2;
	}
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<endl;

	}
	return 0;
}
