#include <stdio.h>
int main()
{
int t;
  scanf("%d",&t);
  while(t--)
  {
    int n,a[100][100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    }
    
     for(i=0;i<n;i++)
    {
      for(j=i;j<n-i-1;j++)
      {
        int temp=a[i][j];
        a[i][j]=a[n-1-j][i];
        a[n-1-j][i]=a[n-1-i][n-1-j];
        a[n-1-i][n-1-j]=a[j][n-1-i];
        a[j][n-1-i]=temp;
      }    
     } 
      for(i=0;i<n;i++)
    {
      for(j=0;j<n-1;j++)
      {
        printf("%d ",a[i][j]);
      } 
         printf("%d",a[i][n-1]);
     
        printf("\n");
     }
    printf("\n");
  }
    return 0;
}
