
#include<stdio.h>
int disp_lcm3(int x, int y, int z);
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d",disp_lcm3(a, b, c));
}
int  disp_lcm3(int x, int y, int z)
{
    int a1 = x, a2 = y;
    int temp;
    while (y != 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }
    int lcm_xy = (a1 * a2) / x;
    int a3 = z, a4 = lcm_xy;
    while (z != 0)
    {
        temp = lcm_xy % z;
        lcm_xy = z;
        z = temp;
    }
    int lcm_xyz = (a3 * a4)/lcm_xy;
    return  lcm_xyz;
}
