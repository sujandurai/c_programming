#include<stdio.h>
int main()
{
    int a[5],a1[5],sum=0,count=0,count1=0,n=0;
     while(1)
    {
        scanf("%d",&a[n]);
        if(a[n]==0)
        {
        break;
        }
        n++;
    }
    for(int i=0;i<n;i++)
    {
      sum=0;
      while(a[i]!=0)
      {
         int num=a[i]%10;
         sum=sum+num;
         a[i]=a[i]/10;
      }
      a1[count1++]=sum;
    }
    for(int j=0;j<count1;j++)
    {
       for(int m=0;m<=j;m++)
       {
        if(a[m]>a[m+1])
        {
        int temp=a1[m];
        a1[m]=a[m+1];
        a1[m+1]=temp;
        }
       }
    }
    for(int j=0;j<count1;j++)
    {
        printf("%d\n",a1[j]);
    }
    
}