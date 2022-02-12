#include<stdio.h>
int main()
{
    int k,n,sum=0,d;
    scanf("%d",&n);
    k=n*n;
    while(k)
    {
        d=k%10;
        k=k/10;
        sum=sum+d;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}