#include<stdio.h>
void function_name(int x);
int main()
{
    int a=5;
    function_name(a);
}
void function_name(int x)
{
    if(x<=0)
    return ;

    printf("%d\n",x);
    function_name(x-1);
    
}