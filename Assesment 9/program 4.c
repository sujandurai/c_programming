#include<stdio.h>
int main()
{
    int a[5],num=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(num<a[i])
        num=a[i];
    }
    printf("%d",num);
}