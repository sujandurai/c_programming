#include<stdio.h>
int main()
{
    int a,a1,sum=0,x,a2,sum1=0;
    scanf("%d",&a);
    a1=a/100;
    sum=a1*100;
    a=a%10;
    sum=sum+a;
    printf("%d",sum);

}
   
