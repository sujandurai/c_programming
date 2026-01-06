#include<stdio.h>
int main()
{
    int i,sum=0;
    scanf("%d",&i);
    while(i!=0)
    {
      int num=i%100;
      if(num==16 || num==25||num==36||num==49 || num==64||num==81){
      sum++;}
      i=i/10;
    }
    printf("%d",sum);
  
}