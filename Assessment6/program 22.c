#include<stdio.h>
int main()
{
    int i,sum=0;
    scanf("%d",&i);
    while(i!=0)
    {
      int num=i%100;
      printf("%d\n",num);
      if(num%2!=0 && num-10>0){
      sum++;}
      i=i/10;
    }
    printf("%d",sum);
  
}