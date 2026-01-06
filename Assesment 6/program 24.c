#include<stdio.h>
int main()
{
    int i,sum=0,num1=0;
    scanf("%d",&i);
    while(i!=0)
    {
      int num=i%10;
      int j=1;
      sum=0;
      while(num>=j)
      {
      if(num%j==0){
      sum++;}
      j++;
    }
    if(sum==2)
    num1++;
      i=i/10;
    }
    printf("%d",num1);
  
}