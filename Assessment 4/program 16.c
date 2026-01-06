#include<stdio.h>
int main()
{
    int i,sum=0,num;
    scanf("%d",&num);
    i=1;
    loop:if(num>=i)
    {
       if(num%i==0)
       {
       sum++;
       }
       i++;
       goto loop;
      
    }
    if(sum%2==0)
    printf("prime");
    else
     printf("not prime");
}