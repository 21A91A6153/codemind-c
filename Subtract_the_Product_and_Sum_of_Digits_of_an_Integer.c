#include<stdio.h>
int main()
{
    int n,d,sum=0,res=0,mul=1;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        sum=sum+d;
        mul=mul*d;
    }
    res=mul-sum;
    printf("%d",res);
    return 0;
}