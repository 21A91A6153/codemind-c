#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,k,s;
    scanf("%d%d%d",&a,&b,&c);
    s=pow(a,b);
    k=s%c;
    printf("%d",k);
    return 0;
}