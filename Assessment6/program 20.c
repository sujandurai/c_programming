#include<stdio.h>
int main()
{
    int i=1,sum=0,j=0,num=0;
    while(i<10)
    {
      j=1;
      sum=0;
      while(i>=j)
      {
      if(i%j==0)
      {
      sum++;}
      j++;}
      if(sum==2)
      {num++;}
      i++;
    }
    printf("%d",num);
  
}