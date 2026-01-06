#include<stdio.h>
int main()
{
    int num,sum=0,digit=0,count=0;
    scanf("%d",&num);
    int dup=num,a=1;
    num=num/10;
    for(;num>0; num=num/10)
    {
        a=a*10;
    }
    if((dup%10)%2==0)
    printf("%d",dup);
    else
    printf("%d",(dup-a));

}