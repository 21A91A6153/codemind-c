#include<stdio.h>
int main()
{
    int n,m,i,j,c=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(i*j==n)
            {
                c+=1;
                printf("%d %d",i,j);
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}