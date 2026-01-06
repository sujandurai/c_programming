#include <stdio.h>
int main()
{
    int num, dup, a = 1;
    int first, mid, last;
    scanf("%d", &num);
    dup = num;
    num = num / 10;
    for ( ; num > 0; num = num / 10)
    {
        a = a * 10;
    }
    first = (dup % 10) * a;
    mid   = (dup / 10) % (a / 10) * 10;
    last  = dup / a;
    printf("%d", first + mid + last);
    return 0;
}
