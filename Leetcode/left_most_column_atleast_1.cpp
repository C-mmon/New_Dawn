supppose we have dimensio
int dim[0]=x;
int dim[1]=y;

int result=-1;
dim[0]--;
dim[1]--;

while(x>=0 && y>=0)
{
  if(matrix[x][y]==1)
  {
    result=y;
    y-=1;
  }
  else
  {
    x-=1;
  }
  return result;
}
