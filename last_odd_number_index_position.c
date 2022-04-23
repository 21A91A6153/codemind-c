#include<stdio.h>
int main()
{
    int arr[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=1;i--)
    {
        if(arr[i]%2==1)
        {
          printf("%d",i);
        }
        break;
    }
    return 0;
    
    
}