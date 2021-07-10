#include <stdio.h>
using namespace std;
int* add(int *a,int *b)
{
  int *c=(int*)malloc(sizeof(int));
  *c=(*a)+(*b);
  return c;
}
int main()
{
  int a=2,b=5;
  int *ptr=add(&a,&b);
  cout<<*ptr<<endl;
}
