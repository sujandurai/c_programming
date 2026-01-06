#include<stdio.h>
void disp_2digit_odd_sum_tens7(int x);
int main()
{
    int a=11;
    disp_2digit_odd_sum_tens7(a);
}
void disp_2digit_odd_sum_tens7(int x)
{
    static int sum=0;
    if(x>=100){
    printf("%d\n",sum);
    return ;}

    if(x/10==7){
    sum=sum+x;
   }
    disp_2digit_odd_sum_tens7(x+2);
    
}