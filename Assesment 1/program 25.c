#include<stdio.h>
int main()
{
    int a,a1,sum=0,x,a2,sum1=0; 
    scanf("%d",&a);
    x=a;
    a1=a%10;
    sum=sum+a1;
    a=a/10;
    a1=a%10;
    sum=sum+a1;
    a=a/10;
    a1=a%10;
    sum=sum+a1;
   (sum-9>0)? printf("%d",(sum%10)+sum/10) : printf("%d",sum);
   
   
}
   
