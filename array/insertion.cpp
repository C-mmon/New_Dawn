#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5]={1,2,3,4,5};
  int arr_1[6];
  int pos=0;
  int key=19;
  //Left
  int i=0;
  while(i<pos)
  {
    arr_1[i]=arr[i];
    i++;
  }
  //Insertion
  arr_1[pos]=key;

  //Right
  int j=pos+1;
  cout<<j<<endl;
  while(j<6)
  {
    arr_1[j]=arr[j-1];
    j++;
  }
  for(int i=0;i<6;i++)
  {
    cout<<arr_1[i]<<endl;
  }


  return 0;
}
