#include <stdio.h>

int findMin(int a, int b, int c, int d, int e);

int main(void)
{
    int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    printf("%d\n", findMin(a, b, c, d, e));
    return 0;
}

int findMin(int a, int b, int c, int d, int e)
{
    if (a < b && a < c && a < d && a < e)
    {
        return a;
    } else if (b < a && b < c && b < d && b < e) {
        return b;
    } else if (c < a && c < b && c < d && c < e) {
        return c;
    } else if (d < a && d < b && d < c && d < e) {
        return d;
    } else {
        return e;
    }
}