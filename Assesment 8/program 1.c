#include<stdio.h>
int disp_sum(int sum,int i);
int main()
{
  int result;
  result=disp_sum(0,1);
  printf("%d",result);
}

int disp_sum(int sum,int i)
{
    if(i>=6)
    return sum;

    disp_sum(sum+i,i+1);

}