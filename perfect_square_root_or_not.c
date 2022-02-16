#include<stdio.h>
#include<math.h>
int main()
{
    int n,s;
    float k;
    scanf("%d",&n);
    k=sqrt(n);
    s=k;
    if(s==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}