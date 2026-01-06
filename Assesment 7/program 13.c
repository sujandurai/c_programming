#include<stdio.h>
void count_total_digits(int x,int dup);
int main()
{
    int a,dup;
    scanf("%d",&a);
    dup=a;
    if(a==0)
    printf("0");
    else
    count_total_digits(a,dup);
}
void count_total_digits(int x,int dup)
{
    static int count=1;
    if(x==0){
        count=count/10;
        printf("%d",(dup%10*count)+((dup%(count))/10)*10+(dup/count));  
    return ;}
    
    
    count=count*10;
    count_total_digits(x/10,dup);
}