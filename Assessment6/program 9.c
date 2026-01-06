#include<stdio.h>
int main()
{
    int a=10,sum=0;
    while(a<99)
    {
        if( a/10==5&& a%10!=0){
        sum=sum+a;}
        a=a+1;
    }
    printf("%d\n",sum);
}