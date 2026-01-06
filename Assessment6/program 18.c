#include<stdio.h>
int main()
{
    int a=0,sum=0,i=1;
    scanf("%d",&a);
    a=a%100;
    while(i<=a)
    {
       if(a%i==0){
       sum++;}
       i++;
    }
   if(sum==2)
   printf("prime");
   else
   printf("not prime");
}