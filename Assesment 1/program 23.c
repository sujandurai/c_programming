#include<stdio.h>
int main()
{
    int a,a1,sum=0,x;
    scanf("%d",&a);
    x=a;
    a1=a%10;
    sum=sum+a1;
    a=a/10;
    sum=sum+a;
    (sum%2 ==0)? printf("%d",x): printf("%d",x-5);
}