#include<stdio.h>
int main()
{
    int j=0,i,sum=0;
    i=10;
    loop:if( i<=99)
    {
        int a1=i/10;
        int a2=i%10;
        if(a1==7&&a2%2!=0)
        {
            sum=sum+i;
        }
     i++;
     goto loop;
    }
     printf("%d\n",sum); 
}