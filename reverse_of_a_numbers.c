#include<stdio.h>
int main()
{
    int n,rev=0,rem=0;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}