#include<stdio.h>
int main()
{
    int a,a1,x,a2;
    scanf("%d",&a);
    x=a;
    a1=a%10;
    a2=a/100;
   (a1%2!=0 && a2%2!=0)? printf("%d",x-5): printf("%d",x);
}