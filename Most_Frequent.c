#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=0,max=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //printf("%d ",arr[i]);
    }
    int brr[n];
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c>max)
        {
            max=c;
            k=arr[i];
        }
        else if(max==c)
        {
            if(k>arr[i])
            {
                k=arr[i];
            }
        }
    }
    printf("%d ",k);
}