#include<stdio.h>
void function_name(int x);
int main()
{
    int a=11;
    function_name(a);
}
void function_name(int x)
{
    if(x>=20)
    return ;

    printf("%d\n",x);
    function_name(x+2);
    
}