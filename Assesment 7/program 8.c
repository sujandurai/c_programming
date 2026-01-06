#include<stdio.h>
void disp_2digit_even_sum6(int x);
int main()
{
    int a=10;
    disp_2digit_even_sum6(a);
}
void disp_2digit_even_sum6(int x)
{
    if(x>=100)
    return ;

    if(x%10+x/10==6){
    printf("%d\n",x);}
    disp_2digit_even_sum6(x+2);
    
}