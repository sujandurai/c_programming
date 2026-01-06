#include<stdio.h>
int disp_two_digit_square(int i);
int main()
{
    int a=0;
    scanf("%d",&a);
    printf("%d",disp_two_digit_square(a));
}
int  disp_two_digit_square(int i)
{
    static int count=0;
    if(i==0)
    { 
    return count ;}
    
     int i2=i%100;
    if(i2==16 || i2==25 || i2==36 ||i2==49|| i2==64 ||i2==81)
    {
       count++;
    }

    disp_two_digit_square(i/10);
}
