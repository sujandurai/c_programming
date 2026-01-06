#include<stdio.h>
void check_perfectsquare(int i);
int main()
{
    int a=0;
    scanf("%d",&a);
    check_perfectsquare(a);
}
void check_perfectsquare(int i)
{
    static int count=0;
    if(i==0)
    { printf("%d",count);
    return;}
    
     int i2=i%100;
    if(i2==16 || i2==25 || i2==36 ||i2==49|| i2==64 ||i2==81)
    {
       count++;
    }

    check_perfectsquare(i/10);
}
