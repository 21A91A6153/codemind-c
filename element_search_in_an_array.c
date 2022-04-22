#include<stdio.h>
int main()
{
    int arr[100],i,n,m,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m==arr[i])
        {
        printf("True");
        return 0;
        }
    }
    printf("False");
    
}