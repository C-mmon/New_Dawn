//rightmost different bit
int main()
{
  int a,b;
  int tempa;
  int tempb;
  while(i<=31)
  {
    tempa=a&(1<<i);
    tempb=b&(1<<i);
    if(tempa^tempb)
    {
      cout<<"different number"<<endl;
    }
    else
    {
      cout<<"YOu know"<<endl;
    }
  }
}
