#include<stdio.h>
#include<math.h>
int main()
{
    int n,a;
    float i,s;
    scanf("%d",&n);
    s=sqrt(n);
    a=s;
    if(a==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}