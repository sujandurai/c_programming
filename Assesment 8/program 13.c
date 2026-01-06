#include<stdio.h>
int check_perfectsquare(int i);
int main()
{
    int a=0;
    scanf("%d",&a);
    printf("%d",check_perfectsquare(a));
}
int  check_perfectsquare(int i)
{
    static int count=0;
    if(i==0)
    { 
    return count ;}
    
     int i2=i%10;
    if(i2==1 || i2==4 || i2==9)
    {
       count++;
    }

    check_perfectsquare(i/10);
}
