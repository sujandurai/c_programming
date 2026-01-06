#include<stdio.h>
int main()
{
    int a=0,sum=0;
    scanf("%d",&a);
    while(a!=0)
    {
        sum++;
        a=a/10;
    }
    printf("%d\n",sum);
}