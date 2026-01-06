/*Write a function to compare a set of integers.
Print Success or failture
Function Name: memcomp(src,dst,size)*/

#include<stdio.h>
void memcopy(int* src , int* dst ,int n){
    int i =0 ,flag =1;
    while (i<n){
        if(dst[i]!=src[i]){
            flag =0;
            break;
        }
        i++;
    }
    if(flag) printf("Success");
    else printf("Failure");
}
int main(){
    int n;
    scanf("%d",&n);
    int src[n];
    int dst[n];
    for (int i=0 ;i<n ;i++){
        scanf("%d",&src[i]);
    }
    for (int i=0 ;i<n ;i++){
        scanf("%d",&dst[i]);
    }
    memcopy(src, dst, n);
}