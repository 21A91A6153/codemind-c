#include<stdio.h>
int main()
{
    int sum=0,k=1,d,n;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        k=k*d;
        sum=sum+d;
    }
    if(sum==k)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}