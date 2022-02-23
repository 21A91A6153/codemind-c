#include<stdio.h>
int main()
{
    int n,i,sum=0,k;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            k=i;
            sum=sum+k;
        }
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}