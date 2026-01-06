#include<stdio.h>
void check_prime(int i);
int main()
{
    int a=1;
    check_prime(a);
}
void check_prime(int i)
{
    static int count=0;
    if(i>10)
    { printf("%d",count);
    return;}
    
    if(i==2 || i==3 || i==5 || i==7)
    {
       count++;
    }

    check_prime(i+1);
}
