#include<stdio.h>
int main()
{
    int n,arr[1000],i,j,a,b,c=0,min=10;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            c++;
            if(min>arr[i])
            {
                min=arr[i];
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d ",min);
    }
    return 0;
}