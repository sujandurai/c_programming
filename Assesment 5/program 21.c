#include <stdio.h>
int main()
{
    int num, i, count = 0;
    scanf("%d", &num);
    for ( ; num != 0; num = num / 10)
    {
        i = num % 10;
        if (i % 2 != 0)
            count++;
    }
    printf("%d", count);
    return 0;
}
