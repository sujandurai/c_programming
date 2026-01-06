#include<stdio.h>
int check_oddnumber(int i);
int main()
{
    int a=0;
    scanf("%d",&a);
   printf("%d",check_oddnumber(a));
}
int  check_oddnumber(int i)
{
    static int count=0;
    if(i==0)
    {
    return count;}
   if((i%10)%2!=0)
    count++;
    check_oddnumber(i/10);
}
