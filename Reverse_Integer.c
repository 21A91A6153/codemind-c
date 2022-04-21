#include<stdio.h>
int main()
{
    int n,d,i,rev=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    printf("%d",rev);
}