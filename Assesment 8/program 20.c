#include<stdio.h>
int  disp_count_hcf2(int x,int y);
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    printf("%d",disp_count_hcf2(a,b));

}

int disp_count_hcf2(int x,int y)
{
   
 int temp;
 while(y!=0)
 {
   int temp;
   temp=x%y;
   x=y;
   y=temp;
}
  return x;
}
