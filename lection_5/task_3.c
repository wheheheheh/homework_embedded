#include <stdio.h>

int main(void)
{
    int a, b;
    int sum = 0;
    scanf("%d%d", &a, &b);
    while (a <= b)
    {
        sum += a*a;
        ++a;
    }
    printf("%d\n", sum);
    return 0;
}