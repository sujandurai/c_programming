#include<stdio.h>
int main()
{
    int a=5,sum=0;
    while(a>0)
    {
        sum=sum+a;
        a=a-1;
    }
     printf("%d\n",sum);
}