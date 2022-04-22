#include<stdio.h>
int main()
{
    int arr[100],i,n,min,max;
    float sum=0,e;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       sum=sum+arr[i];
    }
   
    e=sum/n;
    printf("%.2f",e);
    return 0;
    
}