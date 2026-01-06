#include<stdio.h>
void count_total_digits(int x);
int main()
{
    int a;
    scanf("%d",&a);
    if(a==0)
    printf("0");
    else
    count_total_digits(a);
}
void count_total_digits(int x)
{
    static int count=0;
    if(x==0){
    printf("%d",count);
    return ;}
    
    count=count*10+x%10;
    count_total_digits(x/10);
    
}