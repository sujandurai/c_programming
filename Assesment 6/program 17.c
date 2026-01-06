#include<stdio.h>
int main()
{
    int a=0,sum=0,i=1;
    scanf("%d",&a);
    while(i<=a)
    {
       if(a%i==0){
       sum++;}
       i++;
    }
   if(sum==2 && (a%10+a/10)==14)
   printf("Prime And Sum Of Digit Is 14 ");
   else if(sum!=2 && a%10+a/10==14)
   printf("Not Prime And Sum Of Digit Is 14 ");
   else if(sum==2 && a%10+a/10!=14)
   printf(" Prime And Not Sum Of Digit Is 14 ");
   else
   printf("Not Prime And Not Sum Of Digit Is 14 ");
}