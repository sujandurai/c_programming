#include <stdio.h>
int main()
{
    int a, b, max;
    scanf("%d %d", &a, &b);
    for (max=(a > b)?a : b; ; max++) 
    {
        if (max % a == 0 && max % b == 0)
        {
            printf("%d", max);
            break;
        }
    }
    return 0;
}
