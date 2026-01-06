#include<stdio.h>
void function_name(int x);
int main()
{
    int a=6;
    function_name(a);
}
void function_name(int x)
{
    static int sum=0;
    if(x<=0)
    {
    printf("%d",sum);
    return ;}

     sum=sum+x;
    function_name(x-1);
    
}