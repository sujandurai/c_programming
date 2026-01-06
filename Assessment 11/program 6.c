/*Write a function to copy integers from one
location to another location.

Function Name: memcopy(src,dst,size)*/
#include<stdio.h>
void memcopy(int* a,int* b,int n){
    for (int i =0 ;i<n;i++){
        b[i]=a[i];
        printf("Copied - %d\n",b[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for (int i =0 ;i<n ;i++)
       scanf("%d",&a[i]);
    memcopy(a,b,n);
}