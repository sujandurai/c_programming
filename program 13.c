#include<stdio.h>
int main()
{
    int a,a1,a2;
    scanf("%d",&a);
    a1=a%10;
    a2=a/10;
    if(a1==a2)
    printf("success");
    else 
    printf("failure");

}
