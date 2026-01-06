#include<stdio.h>
int main()
{

    int j=0,i;
    i=10;
     loop:if(i<=99 && j<3)
    {
        i=i+1;
        int m= i%10;
        int n=i/10;
        if(m+n==7&&i%2!=0)
        {
        printf("%d\n",i);
        j++;
        }
        goto loop ; 
    }
    
    
}