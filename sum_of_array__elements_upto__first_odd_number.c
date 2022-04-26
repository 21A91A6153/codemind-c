#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0,j,ind=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   // scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            ind=i;
            break;
        }
    }
        for(j=0;j<ind;j++)
        {
            sum=sum+arr[j];

        }
    printf("%d",sum);
}
