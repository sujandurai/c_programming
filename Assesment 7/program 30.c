#include<stdio.h>
void disp_count_hcf2(int x,int y);
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    disp_count_hcf2(a,b);

}

void disp_count_hcf2(int x,int y)
{
   
 int temp;
 while(y!=0)
 {
   int temp;
   temp=x%y;
   x=y;
   y=temp;
}
  printf("%d", x);
}
