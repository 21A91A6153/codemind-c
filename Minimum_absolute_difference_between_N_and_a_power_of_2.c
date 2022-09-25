#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,a,b,c,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(n<=pow(2,i))
        {
            a=i-1;//-1
            b=i;
            break;
        }
    }
    c=n-pow(2,a);
    d=pow(2,b)-n;
    if(c<d)
    {
        printf("%d",c);
    }
    else
    {
        printf("%d",d);
    }
}