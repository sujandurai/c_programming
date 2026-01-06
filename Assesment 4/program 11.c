#include<stdio.h>
int main()
{
    int j=0,i,sum=0,num;
    scanf("%d",&num);
    loop: if(num!=0)
    {
       i=num%10;
       sum=sum+i;
       num=num/10;
       j=j+1;
       goto loop;
    }
     printf("%d\n",j); 
}