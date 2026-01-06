#include<stdio.h>
int disp_rsum(int sum,int i);
int main()
{
  int result;
  result=disp_rsum(0,6);
  printf("%d",result);
}

int disp_rsum(int sum,int i)
{
    if(i<0)
    return sum;

    disp_rsum(sum+i,i-1);

}