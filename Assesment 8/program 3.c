#include<stdio.h>
int disp_2digit_sum(int sum,int i);
int main()
{
  int result;
  result=disp_2digit_sum(0,51);
  printf("%d",result);
}

int disp_2digit_sum(int sum,int i)
{
    if(i>59)
    return sum;

    disp_2digit_sum(sum+i,i+1);

}