#include<stdio.h>
int main()
{
    int arr[100],n,i,c=0,d,temp,rev=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
      // printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        while(arr[i])
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            rev=rev+d;
        }
    }
    printf("%d",rev);
}