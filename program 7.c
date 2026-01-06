#include<stdio.h>
int main()
{
    int a=10,sum=0;
    while(a<99)
    {
        if(a%10+a/10==7 && a%2!=0){
        printf("%d\n",a);}
        a=a+1;
    }
}