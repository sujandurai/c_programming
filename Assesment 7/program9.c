#include<stdio.h>
void disp_2digit_ones5(int x);
int main()
{
    int a=10;
    disp_2digit_ones5(a);
}
void disp_2digit_ones5(int x)
{
    static int sum=0;
    if(x>=100){
    printf("%d",sum);
    return ;}

    if(x/10==5 && x%10!=0){
    sum=sum+x;}
    disp_2digit_ones5(x+1);
    
}