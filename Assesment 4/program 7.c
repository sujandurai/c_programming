#include<stdio.h>
int main()
{

    int j=0,i=10;
    loop: if( i<=99 && j<3)
    {
        int m= i%10;
        int n=i/10;
        if(m+n==6&& i%2==0)
        {
        printf("%d\n",i);
        j++;
        }
        i++;
        goto loop;
    }
    
    
}