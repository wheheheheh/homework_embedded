#include <stdio.h>

int main(void)
{
    int a, b, t;
    scanf("%d%d", &a, &b);
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    printf("%d\n", a);
    return 0;
}