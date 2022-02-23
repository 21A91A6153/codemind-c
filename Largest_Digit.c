#include<stdio.h>
int main()
{
    int n,d,k=0;
    scanf("%d",&n);
    while(n!=0)//1234
    {
        d=n%10;
        n=n/10;
        if(k<d)
        {
            k=d;
        }
    }
    printf("%d",k);
    return 0;
}