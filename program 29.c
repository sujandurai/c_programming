#include <stdio.h>
int main() {
    int a, a1, num,a2;
    scanf("%d", &a);
    scanf("%d", &a1);
    scanf("%d", &a2);
    int d1=a;
    int d2=a1;
    num = a % a1;  
    while (num != 0) {
        a = a1;
        a1 = num;
        num = a % a1; 
    }
    int lcm= (d1*d2)/a1;
    int d3=lcm;
    int d4=a2;
    num= lcm%a2;
    while (num != 0) {
        lcm= a2;
        a2 = num;
        num = lcm % a2; 
    }
    printf("%d",(d3*d4)/a2);  
    return 0;
}
