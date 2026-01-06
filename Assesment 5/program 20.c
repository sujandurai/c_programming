#include<stdio.h>
int main()
{
    int num,sum=0,digit=0,count=0,i=1,j;
    for( ;i<=9;i++)
    {   count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
               count++;}
               if(count==2)
                  digit++;}
    printf("%d",digit);
}