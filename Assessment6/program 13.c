#include<stdio.h>
int main()
{
    int a=0,sum=0,num=0;
    scanf("%d",&a);
    while(a!=0)
    {
        num=a%10;
        sum=sum*10+num;
        a=a/10;
    }
    printf("%d\n",sum);
}