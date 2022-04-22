#include<stdio.h>
int main()
{
    int arr[200],temp[100],rev[100],d,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        rev[i]=0;
    }
    for(i=0;i<n;i++)
    {
        temp[i]=arr[i];
        while(arr[i])
        {
        d=arr[i]%10;
        arr[i]=arr[i]/10;
        rev[i]=rev[i]*10+d;
        }
        if(temp[i]==rev[i])
       {
        printf("True
");
      }
      else
      {
        printf("False
");
      }
    }
    
    
}