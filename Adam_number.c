#include<stdio.h>
int main()
{
    int n,d,k,m,temp=0,sum=0,v,e=0,s=0;
    scanf("%d",&n);
    temp=n;
    k=n*n;
    while(n)
    {
        d=n%10;
        n=n/10;
        sum=sum*10+d;
    }
    m=sum*sum;
    e=sum;
    while(m)
    {
        v=m%10;
        m=m/10;
        s=s*10+v;
    }
    if(s==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}