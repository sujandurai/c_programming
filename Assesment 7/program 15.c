#include<stdio.h>
void check_prime(int x,int i);
int main()
{
    int a,i=1;
    scanf("%d",&a);
    if(a==0)
    printf("0");
    else
    check_prime(a,i);
}
void check_prime(int x,int i)
{
    static int count=0;
    if(x+1<=i)
    {
        if(count==2)
        printf("prime");
        else
        printf("not prime");
         return ;
    }
      if(x%i==0)
    {
       count++;
    }
    check_prime(x,i+1);
}
