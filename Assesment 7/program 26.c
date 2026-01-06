#include <stdio.h>

void check_biggest4_div7_div9(int i, int x);

int main()
{
    check_biggest4_div7_div9(63, 0);
    return 0;
}

void check_biggest4_div7_div9(int i, int x)
{
    if (i > 100000)
    {
        printf("%d", x);
        return;
    }

    check_biggest4_div7_div9(i + 63, i);
}
