#include <stdio.h>
int main()
{
    int num, count = 0, i;
    scanf("%d", &num);
    for ( ; num != 0; num = num / 100)
    {
        i = num % 100;
        if (i % 2 != 0)
            count++;
    }
    printf("%d", count);
    return 0;
}
