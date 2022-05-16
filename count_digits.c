#include<stdio.h>
int main()
{
    int arr[100],i,n,c=0,d,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
       // printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        temp=arr[i];
        while(arr[i])
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            c++;
        }
        if(temp==0)
        {
            c++;
        }
        printf("%d ",c);

    }
}