#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum=0;
    scanf("%d",&a);
    loop:
   
    b = 10;
    c=a/b;
    d=c*b;
    e=a-d;
   
    sum=sum+e;
   
    if(e!=0)
    {
        sum=sum*10;
        a=a/10;
    goto loop;
    }
    sum=sum/10;
     printf("%d",sum); 
}
