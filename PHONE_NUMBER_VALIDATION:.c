#include<stdio.h>
int main()
{
   long int a,d,c=0;
    scanf("%ld",&a);
    while (a!=0)
    {
        d=a%10;
        a=a/10;
        c=c+1;
    }
    if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}