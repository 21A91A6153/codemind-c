#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],sum=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        k=sqrt(arr[i]);
        if(k*k==arr[i])
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
    
}