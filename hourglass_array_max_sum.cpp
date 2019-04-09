#include <stdio.h>
int main()
{
int r,c,a[10][10];
  scanf("%d",&r);
  scanf("%d",&c);
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  int s=0,p=0,x=0,y=0,sum=0,max=0;
  while(s<=3)
  {
    while(p<=3)
    {
  for(i=x;i<x+3;i++)
  { 
    for(j=y;j<y+3;j++)
    {
      sum=sum+a[i][j];
      if(i==(s+1) && j!=(p+1))
        sum=sum-a[i][j];
    }
  }
      y++;
      p++;
      if(sum>max)
        max=sum;
      sum=0;
  }
    p=0;
    y=0;
    x++;
    s++;
  }
  printf("%d",max);
    return 0;
}
