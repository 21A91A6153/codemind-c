#include<stdio.h>
int main()
{
    int arr[100],i,n,min,max;
    int sum=0,e;
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
    for(i=0;i<n;i++)
    {
        if(e==arr[i])
        {
            printf("True");
            return 0;
        }
    }       
    printf("False");
    
}