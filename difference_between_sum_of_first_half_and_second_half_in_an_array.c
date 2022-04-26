#include<stdio.h>
int main()
{
    int arr[100],s1=0,s2=0,n,i,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        s1+=arr[i];
    }
    for(i=n/2;i<n;i++)
    {
        s2+=arr[i];
    }
    d=(s2-s1);
    printf("%d",d);
}