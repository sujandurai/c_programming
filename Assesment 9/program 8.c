#include<stdio.h>
int main()
{
    int a[5],a1[5],count=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
      if(a[i]%2!=0)
      {
         a1[count++]=a[i];
      }
    }
    for(int j=0;j<count;j++)
    {
    printf("%d",a1[j]);
    }
    
}