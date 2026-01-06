#include<stdio.h>
int main()
{
    int i=1,sum=0;
    loop: if(i<10)
     {
        printf("%d\n",i);
          i=i+2;
        goto loop;
     }
     
}