#include<stdio.h>
int main()
{
    int a[9999],i=0,sum=0;
    while(1)
    {
        scanf("%d",&a[i]);
        sum=sum+i;
        if(a[i]==0)
        {
        break;
        }
        i++;
    }
    if(i%2==0)
    {
        i=i/2;
        printf("%d",a[i]);
    }
    else
    {
        i=i/2;
        printf("%d",(a[i]+a[i-1])/i);
    }

    
    
}
    