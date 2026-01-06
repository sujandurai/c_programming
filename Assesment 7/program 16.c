#include<stdio.h>
void check_prime_sum14(int x,int i);
int main()
{
    int a,i=1;
    scanf("%d",&a);
    if(a==0)
    printf("0");
    else
    check_prime_sum14(a,i);
}
void check_prime_sum14(int x,int i)
{
    static int count=0;
    if(x+1<=i)
    {
        if(count==2&& x%10+x/10==14)
        printf("prime and sum 14");
        else if(count!=2&& x%10+x/10==14)
        printf("not prime and sum 14");
        else if(count==2&& x%10+x/10!=14)
        printf("prime and not sum 14");
        else 
        printf("not prime and not sum 14");

         return ;
    }
      if(x%i==0)
    {
       count++;
    }
    check_prime_sum14(x,i+1);
}
