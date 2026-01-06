#include<stdio.h>
int main()
{
    int sum=0,i,j=0;
    for(i=10;i<=99;i=i+1)
    {
        int a1=i/10;   
          if(a1==5)
          {
               sum=sum+i;  
          }
         
    }
     printf("%d",sum);
    return 0;
}