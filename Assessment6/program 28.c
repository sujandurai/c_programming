#include <stdio.h>
int main() {
    int a, a1, num;
    scanf("%d", &a);
    scanf("%d", &a1);
    int d1=a;
    int d2=a1;
    num = a % a1;  
    while (num != 0) {
        a = a1;
        a1 = num;
        num = a % a1;  
    }
    printf("%d",(d1*d2)/a1);  
    return 0;
}
