#include<stdio.h>
void check_last_digit_odd(int x,int dup);
int main()
{
    int a,dup;
    scanf("%d",&a);
    dup=a;
    if(a==0)
    printf("0");
    else
    check_last_digit_odd(a,dup);
}
void check_last_digit_odd(int x,int dup)
{
    static int count=1;
    if(x<10)
    {
        if(((dup%10)%2)==0)
        printf("%d",dup);
        else
        printf("%d",dup-count);

        return;
    }
    count=count*10;
   check_last_digit_odd(x/10,dup);
}