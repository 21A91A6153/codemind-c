#include<stdio.h>
int main()
{
    int arr[100],i,n,j,c=0,k,g=0;
    float avg=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
      // printf("%d ",arr[i]);
    }
    scanf("%d",&k);
    //printf("%d",k);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                //res=res+arr[i];
                c++;
            }
        }
        if(c==2)
        {
            if(arr[i]>=k)
            {
               g++;
            }
        }
    }
    printf("%d",g);
    
}