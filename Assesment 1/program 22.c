#include<stdio.h>
int main()
{
    int a,a1;
    scanf("%d",&a);
    a1=a/10;
    //printf("%d",a);
    (a1%2 ==0)? printf("%d",a): printf("%d",a-5);
}