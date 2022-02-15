#include<stdio.h>
int main()
{
    int l,b,w,area,c,t;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    area=2*w*(l+b-2*w);
    t=area*c;
    if(2*w<l && 2*w<b)
    {
        printf("%d",t);
    }
    else
    {
        printf("Impossible");
    }
    return 0;
}