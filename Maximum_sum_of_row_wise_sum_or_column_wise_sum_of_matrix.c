#include<stdio.h>
int main()
{
    int n,m,i,arr[100][100],j,sum=0,c[10],k=0,g[10],s=0,sums=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
            //printf("%d",arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum=sum+arr[i][j];
        }
        c[k]=sum;
        k++;
    }
    int max=c[0];
    for(i=0;i<=k;i++)
    {
        if(max<c[i])
        {
            max=c[i];
        }
    }
    for(j=0;j<m;j++)
    {
        sums=0;
        for(i=0;i<n;i++)
        {
            sums=sums+arr[i][j];
        }
        g[s]=sums;
        s++;
    }
    int min=g[0];
    for(i=0;i<=s;i++)
    {
        if(min<g[i])
        {
            min=g[i];
        }
    }
    if(min>max)
    {
        printf("%d",min);
    }
    else
    {
        printf("%d",max);
    }
}