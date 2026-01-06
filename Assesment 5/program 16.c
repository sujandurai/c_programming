#include<stdio.h>
int main()
{
    int num,sum=0,digit=0,count=0,i=1;
    scanf("%d",&num);
    for(;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
        printf("prime");
    else
        printf("not prime");
}