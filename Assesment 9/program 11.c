#include<stdio.h>
int main()
{
    int a[5],a1[5],sum=0,flag=0,sum2=0,count=0,count1=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
      sum=0;
      while(a[i]!=0)
      {
         int num=a[i]%10;
         sum=sum*10+num;
         a[i]=a[i]/10;
      }
      sum2=sum2+sum;
      a1[count1++]=sum;
    }
    for(int j=0;j<count1;j++)
    {
    printf("%d\n",a1[j]);
    }
    
}