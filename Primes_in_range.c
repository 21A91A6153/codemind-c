#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,j,c=0,k=0;
    scanf("%d%d",&n,&m);
    if(n==1)
    n=2;
    for(i=n;i<=m;i++)
    {
        c=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            k++;
        }
    }
    printf("%d",k);
}