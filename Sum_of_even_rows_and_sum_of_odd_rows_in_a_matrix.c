#include<stdio.h>
int main()
{
    int arr[100][100],n,m,i,j,es=0,os=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
   {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
   }
   for(i=0;i<n;i++)
   {
        for(j=0;j<m;j++)
        {
            if(i%2==0)
            {
                es=es+arr[i][j];
            }
            if(i%2!=0)
            {
                os=os+arr[i][j];
            }
        }
   }
   printf("%d %d",es,os);
}