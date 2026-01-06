#include<stdio.h>
void disp_lcm2(int x,int y);
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    disp_lcm2(a,b);

}

void disp_lcm2(int x,int y)
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
  printf("%d", a1*a2/x);
}
