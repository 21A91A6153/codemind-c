#include<stdio.h>
int main()
{
    int l,b,w,ia,oa,area,f,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ia=l*b;
    oa=l*b+2*w*b+2*w*l+4*w*w;
    area=oa-ia;
    f=area*c;
    printf("%d",f);
    
}