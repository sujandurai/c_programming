#include<stdio.h>
int main()
{
    int sum=0,i,j=0;
    for(i=11;i<=99 && j<3;i=i+2)
    {
        int a1=i/10;
        int a2=i%10;    
          if(a1+a2==7)
          {
               printf("%d\n",i);
               j++;
          }
    }
    return 0;
}