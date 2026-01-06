#include<stdio.h>
int  disp_lcm2(int x,int y);
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    printf("%d",disp_lcm2(a,b));

}

int disp_lcm2(int x,int y)
{
  int a1=x,a2=y;
 int temp;
 while(y!=0)
 {
   int temp;
   temp=x%y;
   x=y;
   y=temp;
}
     return (a1*a2)/x;
}
