#include<stdio.h>
int main()
{
    int arr[100],i,n,j,c=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
       // printf("%d",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        
        c=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            k++;
           // printf("%d
",k);
        }
        
    }
   printf("%d",k);
}