#include<stdio.h>
int main()
{
    int a=0,num=0,sum=0,a1=0;
    while(a1<100000)
    {   a=a1;
        sum=0;
        while(a!=0)
        {
          num=a%10;
          sum=sum+num;
          a=a/10;
        }
        if(sum==14)
        printf("%d\n",a1);

        a1++;
    }
}