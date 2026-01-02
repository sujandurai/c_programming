#include<stdio.h>
int main()
{
    int a,a1,sum=0,x,a2,sum1=0;
    scanf("%d",&a);
    a1=a/100;
    a2=a%100;
    sum=(a1%10)*10+a1/10;
    x=sum*100+a2;
    printf("%d",x);
}
    
