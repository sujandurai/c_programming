#include<stdio.h>
int main()
{
    int i,sum=0;
    scanf("%d",&i);
    while(i!=0)
    {
      int num=i%10;
      if(num%2!=0)
      sum++;
      i=i/10;
    }
    printf("%d",sum);
  
}