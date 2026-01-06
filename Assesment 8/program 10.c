#include<stdio.h>
int disp_2digit_even_sum6(int i);
int main()
{
    int a=1;
   printf("%d",disp_2digit_even_sum6(a));

}
 int disp_2digit_even_sum6(int i)
 {
    static int count=0;
    if(i>10)
    return count;

    if(i==2||i==3||i==5||i==7)
    count++;

    disp_2digit_even_sum6(i+1);
 }