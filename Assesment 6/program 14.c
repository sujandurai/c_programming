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
    int first = dup%10;
    int last= dup/(sum/10);
    int middle= (dup%(sum/10))/10;
   printf("%d",first*(sum/10)+(middle)*10+last);
}