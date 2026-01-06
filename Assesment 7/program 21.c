#include<stdio.h>
void check_oddnumber(int i);
int main()
{
    int a=0;
    scanf("%d",&a);
   check_oddnumber(a);
}
void check_oddnumber(int i)
{
    static int count=0;
    if(i==0)
    { printf("%d",count);
    return;}
   if((i%10)%2!=0)
    count++;
    check_oddnumber(i/10);
}
