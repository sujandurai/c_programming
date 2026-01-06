#include <stdio.h>
int main()
{
    int num, sum = 0, a1;
    scanf("%d", &num);
    for ( ; num > 0; num = num / 10)
    {
        a1 = num % 10;
        sum = sum * 10 + a1;
    }
    printf("%d", sum);
    return 0;
}
