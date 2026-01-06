#include<stdio.h>
int main()
{
    int a=0,sum=1,num=0,dup=0;
    scanf("%d",&a);
    dup=a;
    while(a!=0)
    {
        sum=sum*10;
        a=a/10;
    }
    sum=sum/10;
    if(dup%2!=0)
   printf("%d",dup-sum);
   else
   printf("%d",dup);
}