#include<stdio.h>
int main()
{
    int a[9999],i=0,sum=0;
    while(1)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        if(a[i]==0)
        {
        break;
        }
        i++;
    }
    for(int j = 0; j < i; j++)
    {
        printf("%d\n", a[j]);
    }
    printf("%d",sum);
}
    