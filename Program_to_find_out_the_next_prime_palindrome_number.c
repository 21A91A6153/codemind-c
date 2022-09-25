#include<stdio.h>
#include<math.h>
int isPalindrome(int n)
{
    int flag=0;
    int d=(int)log10(n);
    while(n>0)
   {
       int  r1=n%10;
       int r2=n/(int)pow(10,d);
       if(r1!=r2)
      {
          flag=1;
          break;
      }
       n=n%(int)pow(10,d);
       n=n/10;
       d-=2;
   }
    if(flag==0)
    {
        return  true;
    }
    else
   {
       return  false;
   }
 }
 int isPrime(int n)
 {
     int i;
     for(i=2;i<n;i++)
     {
         if(n%i==0)
           return false;
     }
     return true;
 }
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;i<n*n;i++)
    {
        if(isPalindrome(i) && isPrime(i))
        {
            printf("%d",i);
            break;
        }
    }
}