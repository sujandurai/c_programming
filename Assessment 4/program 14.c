#include<stdio.h>
int main()
{
    int j=0,i,sum=0,num,m=1,sum2;
    scanf("%d",&num);
    int num2=num;
    loop:if(num!=0)
    {
       i=num%10;
       sum++;
       num=num/10;
       goto loop;
    }
    sum=sum-1;
    sum2=sum;
    loop2:if(sum!=0)
    {
        sum--;
        m=m*10;
        goto loop2;
    }
    int n1=num2%10;
    int n2=num2/m;
    
    
    
}