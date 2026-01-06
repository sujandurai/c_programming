#include<stdio.h>
void disp_2digit_odd_sum7(int x);
int main()
{
    int a=11;
    disp_2digit_odd_sum7(a);
}
void disp_2digit_odd_sum7(int x)
{
    if(x>=100)
    return ;

    if(x%10+x/10==7){
    printf("%d\n",x);}
    disp_2digit_odd_sum7(x+2);
    
}