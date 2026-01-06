#include<stdio.h>
int main()
{
    int num,sum=0,digit=0,count=0,i=1;
    scanf("%d",&num);
    for( ;i<=num;i++)
    {
        if(num%i==0)
        count++;
    }
        if(i%10+i/10==14 && count==2)
        printf("prime & sum of digits is 14");
        else if(i%10+i/10==14 && count!=2)
        printf(" Not prime but sum of digits is 14");
        else if(i%10+i/10!=14 && count==2)
        printf("  prime & sum of digits is 14");
        else
        printf("Not Prime & sum of digits is not 14");
        
    
       
}