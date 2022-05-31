#include<stdio.h>
int main()
{
    int n,arr[100],m,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            printf("%d ",i);
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}