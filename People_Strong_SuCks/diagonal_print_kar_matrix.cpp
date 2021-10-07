#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector <vector <int>> store {{1,2,3},{3,4,5},{6,7,8}};
	int row=3;
	int col=3;
	int i,j;
	for(int k=0;k<=row-1;k++)
	{
		i=k;
		j=0;
		while(i>=0)
		{
			cout<<store[i][j];
			i--;
			j++;
		}
	}
	for(int k=1;k<=col-1;k++)
	{
		i=row-1;
		j=k;
		while(j<=n-1)
		{
			cout<<store[i][j];
			i--;
			j++;
		}
	}
	return 0;
}
