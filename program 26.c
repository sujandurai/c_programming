#include<stdio.h>
int main()
{
    int i=0,num=0;
    while(i<10000)
    {
        if(i%9==0 && i%7==0)
        {
            if(i>num)
            num=i;
        }
        i++;
    }
    printf("%d",num);
}