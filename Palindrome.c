#include<stdio.h>
int main()
{
    int n,d,temp=0,rev=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    if(temp==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}