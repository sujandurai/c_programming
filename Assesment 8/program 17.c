#include <stdio.h>

int  disp_count_sum14(int i);
int num(int i, int sum);

int main()
{
    printf("%d",disp_count_sum14(1));
    return 0;
}

int  disp_count_sum14(int i)
{
    static int count = 0;

    if (i > 100000)
    {
        return count ;
    }

    if (num(i, 0) == 1)
    {
        count++;
    }

    disp_count_sum14(i + 1);
}

int num(int i, int sum)
{
    if (i == 0)
    {
        if (sum == 14)
            return 1;
        else
            return 0;
    }

    return num(i / 10, sum + i % 10);
}
