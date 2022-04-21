#include<stdio.h>
int main()
{
    int n,m,d,v,s=0,sum=0,i,j;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    for(j=1;j<m;j++)
    {
        if(m%j==0)
        {
            s=s+j;
        }
    }
    if(n==s&&m==sum)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}