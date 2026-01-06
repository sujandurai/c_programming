#include<stdio.h>
int disp_single_digit_prime(int i);
int main()
{
    int a=0;
    scanf("%d",&a);
    printf("%d",disp_single_digit_prime(a));
}
int disp_single_digit_prime(int i)
{
    static int count=0;
    if(i==0)
    { 
    return count;}
    int i2=i%10;
    if(i2==2 || i2==3 || i2==5 || i2==7)
    {
       count++;
    }

    disp_single_digit_prime(i/10);
}
